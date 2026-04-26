cmake_minimum_required(VERSION 3.15)
project(launcher Java)
find_package(Java 1.7 REQUIRED COMPONENTS Development)

include(UseJava)
set(CMAKE_JAVA_JAR_ENTRY_POINT org.TigerLauncher.EntryPoint)
set(CMAKE_JAVA_COMPILE_FLAGS -target 7 -source 7)

set(SRC
    org/TigerLauncher/EntryPoint.java
    org/TigerLauncher/launcher/Launcher.java
    org/TigerLauncher/launcher/impl/AbstractLauncher.java
    org/TigerLauncher/launcher/impl/StandardLauncher.java
    org/TigerLauncher/exception/ParameterNotFoundException.java
    org/TigerLauncher/exception/ParseException.java
    org/TigerLauncher/utils/Parameters.java
    org/TigerLauncher/utils/ReflectionUtils.java
    org/TigerLauncher/utils/logging/Level.java
    org/TigerLauncher/utils/logging/Log.java
    org/TigerLauncher/legacy/LegacyProxy.java
)

set(LEGACY_SRC
    legacy/org/TigerLauncher/legacy/LegacyFrame.java
    legacy/org/TigerLauncher/legacy/LegacyLauncher.java
    legacy/org/TigerLauncher/legacy/fix/online/Handler.java
    legacy/org/TigerLauncher/legacy/fix/online/OnlineFixes.java
    legacy/org/TigerLauncher/legacy/fix/online/OnlineModeFix.java
    legacy/org/TigerLauncher/legacy/fix/online/SkinFix.java
    legacy/org/TigerLauncher/legacy/utils/Base64.java
    legacy/org/TigerLauncher/legacy/utils/api/MojangApi.java
    legacy/org/TigerLauncher/legacy/utils/api/Texture.java
    legacy/org/TigerLauncher/legacy/utils/json/JsonParseException.java
    legacy/org/TigerLauncher/legacy/utils/json/JsonParser.java
    legacy/org/TigerLauncher/legacy/utils/url/ByteArrayUrlConnection.java
    legacy/org/TigerLauncher/legacy/utils/url/UrlUtils.java
    legacy/net/minecraft/Launcher.java
    legacy/org/TigerLauncher/legacy/LegacyProxy.java
)

add_jar(NewLaunch ${SRC})
add_jar(NewLaunchLegacy ${LEGACY_SRC} INCLUDE_JARS NewLaunch)
install_jar(NewLaunch "${JARS_DEST_DIR}")
install_jar(NewLaunchLegacy "${JARS_DEST_DIR}")
