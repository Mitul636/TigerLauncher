<p align="center">
<picture>
  <source media="(prefers-color-scheme: dark)" srcset="/program_info/org.TigerLauncher.TigerLauncher.logo-darkmode.svg">
  <source media="(prefers-color-scheme: light)" srcset="/program_info/org.TigerLauncher.TigerLauncher.logo.svg">
  <img alt="Tiger Launcher" src="/program_info/org.TigerLauncher.TigerLauncher.logo.svg" width="40%">
</picture>
</p>

<p align="center">
  Tiger Launcher is a custom launcher for Minecraft that allows you to easily manage multiple installations of Minecraft at once.<br />
  <br />This is a <b>fork</b> of the MultiMC Launcher and is <b>not</b> endorsed by it.
</p>

## Installation

<a href="https://repology.org/project/TigerLauncher/versions">
    <img src="https://repology.org/badge/vertical-allrepos/TigerLauncher.svg" alt="Packaging status" align="right">
</a>

- All downloads and instructions for Tiger Launcher can be found on our [Website](https://TigerLauncher.org/download).
- Last build status can be found in the [GitHub Actions](https://github.com/TigerLauncher/TigerLauncher/actions) tab (this also includes the pull requests status).

### Development Builds

Please understand that these builds are not intended for most users. There may be bugs, and other instabilities. You have been warned.

There are development builds available through:

- [GitHub Actions](https://github.com/TigerLauncher/TigerLauncher/actions) (includes builds from pull requests opened by contributors)
- [nightly.link](https://TigerLauncher.org/nightly) (this will always point only to the latest version of develop)

These have debug information in the binaries, so their file sizes are relatively larger.

Prebuilt Development builds are provided for **Linux**, **Windows** and **macOS**.

On Linux, we also offer our own [Flatpak nightly repository](https://github.com/TigerLauncher/flatpak). Most software centers are able to install it by opening [this link](https://flatpak.TigerLauncher.org/TigerLauncher-nightly.flatpakref).

## Community & Support

Feel free to create a GitHub issue if you find a bug or want to suggest a new feature. We have multiple community spaces where other community members can help you:

- **Our Discord server:**

[![Tiger Launcher Discord server](https://discordapp.com/api/guilds/1031648380885147709/widget.png?style=banner3)](https://TigerLauncher.org/discord)

- **Our Matrix space:**

[![Tiger Launcher Space](https://img.shields.io/matrix/TigerLauncher:matrix.org?style=for-the-badge&label=Matrix%20Space&logo=matrix&color=purple)](https://TigerLauncher.org/matrix)

- **Our Subreddit:**

[![r/TigerLauncher](https://img.shields.io/reddit/subreddit-subscribers/TigerLauncher?style=for-the-badge&logo=reddit)](https://TigerLauncher.org/reddit)

## Translations

The translation effort for Tiger Launcher is hosted on [Weblate](https://hosted.weblate.org/projects/TigerLauncher/launcher/) and information about translating Tiger Launcher is available at <https://github.com/TigerLauncher/Translations>.

## Building

If you want to build Tiger Launcher yourself, check the [build instructions](https://TigerLauncher.org/wiki/development/build-instructions).

## Sponsors & Partners

We thank all the wonderful backers over at Open Collective! Support Tiger Launcher by [becoming a backer](https://opencollective.com/TigerLauncher).

[![OpenCollective Backers](https://opencollective.com/TigerLauncher/backers.svg?width=890&limit=1000)](https://opencollective.com/TigerLauncher#backers)

Thanks to JetBrains for providing us a few licenses for all their products, as part of their [Open Source program](https://www.jetbrains.com/opensource/).

<a href="https://jb.gg/OpenSource">
<picture>
  <source media="(prefers-color-scheme: dark)" srcset="https://www.jetbrains.com/company/brand/img/logo_jb_dos_4.svg">
  <source media="(prefers-color-scheme: light)" srcset="https://resources.jetbrains.com/storage/products/company/brand/logos/jetbrains.svg">
  <img alt="JetBrains logo" src="https://resources.jetbrains.com/storage/products/company/brand/logos/jetbrains.svg" width="40%">
</picture>
</a>

Thanks to Weblate for hosting our translation efforts.

<a href="https://hosted.weblate.org/engage/TigerLauncher/">
<img src="https://hosted.weblate.org/widgets/TigerLauncher/-/open-graph.png" alt="Translation status" width="300" />
</a>

Thanks to Netlify for providing us their excellent web services, as part of their [Open Source program](https://www.netlify.com/open-source/).

<a href="https://www.netlify.com"> <img src="https://www.netlify.com/v3/img/components/netlify-color-accent.svg" alt="Deploys by Netlify" /> </a>

Thanks to the awesome people over at [MacStadium](https://www.macstadium.com/), for providing M1-Macs for development purposes!

<a href="https://www.macstadium.com"><img src="https://uploads-ssl.webflow.com/5ac3c046c82724970fc60918/5c019d917bba312af7553b49_MacStadium-developerlogo.png" alt="Powered by MacStadium" width="300"></a>

## Forking/Redistributing/Custom builds policy

You are free to fork, redistribute and provide custom builds as long as you follow the terms of the [license](LICENSE) (this is a legal responsibility), and if you made code changes rather than just packaging a custom build, please do the following as a basic courtesy:

- Make it clear that your fork is not Tiger Launcher and is not endorsed by or affiliated with the Tiger Launcher project (<https://TigerLauncher.org>).
- Go through [CMakeLists.txt](CMakeLists.txt) and change Tiger Launcher's API keys to your own or set them to empty strings (`""`) to disable them (this way the program will still compile but the functionality requiring those keys will be disabled).

If you have any questions or want any clarification on the above conditions please make an issue and ask us.

If you are just building Tiger Launcher for your distribution, please make sure to set the `Launcher_BUILD_PLATFORM` to a slug representing your distribution. Examples are `archlinux`, `fedora` and `nixpkgs`.

Note that if you build this software without removing the provided API keys in [CMakeLists.txt](CMakeLists.txt) you are accepting the following terms and conditions:

- [Microsoft Identity Platform Terms of Use](https://docs.microsoft.com/en-us/legal/microsoft-identity-platform/terms-of-use)
- [CurseForge 3rd Party API Terms and Conditions](https://support.curseforge.com/en/support/solutions/articles/9000207405-curse-forge-3rd-party-api-terms-and-conditions)

If you do not agree with these terms and conditions, then remove the associated API keys from the [CMakeLists.txt](CMakeLists.txt) file by setting them to an empty string (`""`).

## License [![https://github.com/TigerLauncher/TigerLauncher/blob/develop/LICENSE](https://img.shields.io/github/license/TigerLauncher/TigerLauncher?label=License&logo=gnu&color=C4282D)](LICENSE)

All launcher code is available under the GPL-3.0-only license.

The logo and related assets are under the CC BY-SA 4.0 license.
