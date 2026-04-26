#pragma once

#include <QStringList>
#include <QString>

namespace PerformanceOptimizer {
    enum class Profile {
        Potato,
        Low,
        Medium,
        High
    };

    struct OptimizationResult {
        int maxMemoryMiB;
        int minMemoryMiB;
        QStringList jvmArgs;
        QStringList recommendedMods;
    };

    OptimizationResult getOptimizations(const QString& mcVersion, Profile profile);
    Profile autoDetectProfile();
    QString profileToString(Profile profile);
}
