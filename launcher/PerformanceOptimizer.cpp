#include "PerformanceOptimizer.h"
#include "HardwareInfo.h"
#include <algorithm>

namespace PerformanceOptimizer {

Profile autoDetectProfile() {
    uint64_t totalRam = HardwareInfo::totalRamMiB();
    if (totalRam <= 4096) return Profile::Potato;
    if (totalRam <= 8192) return Profile::Low;
    if (totalRam <= 16384) return Profile::Medium;
    return Profile::High;
}

QString profileToString(Profile profile) {
    switch (profile) {
        case Profile::Potato: return "Potato";
        case Profile::Low: return "Low";
        case Profile::Medium: return "Medium";
        case Profile::High: return "High";
    }
    return "Unknown";
}

OptimizationResult getOptimizations(const QString& mcVersion, Profile profile) {
    OptimizationResult result;
    uint64_t totalRam = HardwareInfo::totalRamMiB();

    // RAM Allocation
    switch (profile) {
        case Profile::Potato:
            result.maxMemoryMiB = 2048;
            result.minMemoryMiB = 512;
            break;
        case Profile::Low:
            result.maxMemoryMiB = 4096;
            result.minMemoryMiB = 1024;
            break;
        case Profile::Medium:
            result.maxMemoryMiB = 6144;
            result.minMemoryMiB = 2048;
            break;
        case Profile::High:
            result.maxMemoryMiB = 8192;
            result.minMemoryMiB = 4096;
            break;
    }
    // Don't allocate more than 75% of total RAM
    result.maxMemoryMiB = std::min((int)result.maxMemoryMiB, (int)(totalRam * 0.75));

    // JVM Flags (Aikar-style + G1GC tuning)
    result.jvmArgs << "-XX:+UseG1GC"
                   << "-XX:+ParallelRefProcEnabled"
                   << "-XX:MaxGCPauseMillis=200"
                   << "-XX:+UnlockExperimentalVMOptions"
                   << "-XX:+DisableExplicitGC"
                   << "-XX:+AlwaysPreTouch"
                   << "-XX:G1NewSizePercent=30"
                   << "-XX:G1MaxNewSizePercent=40"
                   << "-XX:G1HeapRegionSize=8M"
                   << "-XX:G1ReservePercent=20"
                   << "-XX:G1HeapWastePercent=5"
                   << "-XX:InitiatingHeapOccupancyPercent=15"
                   << "-XX:G1MixedGCLiveThresholdPercent=90"
                   << "-XX:G1RSetUpdatingPauseTimePercent=5"
                   << "-XX:SurvivorRatio=32"
                   << "-XX:+PerfDisableSharedMem"
                   << "-XX:MaxTenuringThreshold=1";

    // Recommended Mods
    if (mcVersion.startsWith("1.8")) {
        result.recommendedMods << "OptiFine";
    } else if (mcVersion.startsWith("1.16") || mcVersion.startsWith("1.17") || 
               mcVersion.startsWith("1.18") || mcVersion.startsWith("1.19") || 
               mcVersion.startsWith("1.20") || mcVersion.startsWith("1.21")) {
        result.recommendedMods << "Sodium" << "Lithium" << "FerriteCore";
        if (mcVersion.startsWith("1.16") || mcVersion.startsWith("1.17")) {
            result.recommendedMods << "Starlight";
        }
        if (mcVersion >= "1.18") {
            result.recommendedMods << "EntityCulling";
        }
    }

    return result;
}

}
