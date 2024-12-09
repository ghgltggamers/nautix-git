/*
 * Copyright (c) nautix-git 2024
 * Written by ghgltggamer
 * Check the LICENSE file for Licensing info
 * Check out the README.md file for more information
 */
// Source starts from here
#ifndef MAIN_HEADER
#define MAIN_HEADER 11110101
#include <iostream>
#include   <string>
#include  <fstream>
#include   <vector>
#include    <cmath>

std::string repo_path
         ,repo_name
         ,repo_lic;
// GitHub related content is here for files
std::string CODE_OF_CONDUCT_MD = R"(# Contributor Covenant Code of Conduct

## Our Pledge

We as members, contributors, and leaders pledge to make participation in our
community a harassment-free experience for everyone, regardless of age, body
size, visible or invisible disability, ethnicity, sex characteristics, gender
identity and expression, level of experience, education, socio-economic status,
nationality, personal appearance, race, religion, or sexual identity
and orientation.

We pledge to act and interact in ways that contribute to an open, welcoming,
diverse, inclusive, and healthy community.

## Our Standards

Examples of behavior that contributes to a positive environment for our
community include:

* Demonstrating empathy and kindness toward other people
* Being respectful of differing opinions, viewpoints, and experiences
* Giving and gracefully accepting constructive feedback
* Accepting responsibility and apologizing to those affected by our mistakes,
  and learning from the experience
* Focusing on what is best not just for us as individuals, but for the
  overall community

Examples of unacceptable behavior include:

* The use of sexualized language or imagery, and sexual attention or
  advances of any kind
* Trolling, insulting or derogatory comments, and personal or political attacks
* Public or private harassment
* Publishing others' private information, such as a physical or email
  address, without their explicit permission
* Other conduct which could reasonably be considered inappropriate in a
  professional setting

## Enforcement Responsibilities

Community leaders are responsible for clarifying and enforcing our standards of
acceptable behavior and will take appropriate and fair corrective action in
response to any behavior that they deem inappropriate, threatening, offensive,
or harmful.

Community leaders have the right and responsibility to remove, edit, or reject
comments, commits, code, wiki edits, issues, and other contributions that are
not aligned to this Code of Conduct, and will communicate reasons for moderation
decisions when appropriate.

## Scope

This Code of Conduct applies within all community spaces, and also applies when
an individual is officially representing the community in public spaces.
Examples of representing our community include using an official e-mail address,
posting via an official social media account, or acting as an appointed
representative at an online or offline event.

## Enforcement

Instances of abusive, harassing, or otherwise unacceptable behavior may be
reported to the community leaders responsible for enforcement at
.
All complaints will be reviewed and investigated promptly and fairly.

All community leaders are obligated to respect the privacy and security of the
reporter of any incident.

## Enforcement Guidelines

Community leaders will follow these Community Impact Guidelines in determining
the consequences for any action they deem in violation of this Code of Conduct:

### 1. Correction

**Community Impact**: Use of inappropriate language or other behavior deemed
unprofessional or unwelcome in the community.

**Consequence**: A private, written warning from community leaders, providing
clarity around the nature of the violation and an explanation of why the
behavior was inappropriate. A public apology may be requested.

### 2. Warning

**Community Impact**: A violation through a single incident or series
of actions.

**Consequence**: A warning with consequences for continued behavior. No
interaction with the people involved, including unsolicited interaction with
those enforcing the Code of Conduct, for a specified period of time. This
includes avoiding interactions in community spaces as well as external channels
like social media. Violating these terms may lead to a temporary or
permanent ban.

### 3. Temporary Ban

**Community Impact**: A serious violation of community standards, including
sustained inappropriate behavior.

**Consequence**: A temporary ban from any sort of interaction or public
communication with the community for a specified period of time. No public or
private interaction with the people involved, including unsolicited interaction
with those enforcing the Code of Conduct, is allowed during this period.
Violating these terms may lead to a permanent ban.

### 4. Permanent Ban

**Community Impact**: Demonstrating a pattern of violation of community
standards, including sustained inappropriate behavior,  harassment of an
individual, or aggression toward or disparagement of classes of individuals.

**Consequence**: A permanent ban from any sort of public interaction within
the community.

## Attribution

This Code of Conduct is adapted from the [Contributor Covenant][homepage],
version 2.0, available at
https://www.contributor-covenant.org/version/2/0/code_of_conduct.html.

Community Impact Guidelines were inspired by [Mozilla's code of conduct
enforcement ladder](https://github.com/mozilla/diversity).

[homepage]: https://www.contributor-covenant.org

For answers to common questions about this code of conduct, see the FAQ at
https://www.contributor-covenant.org/faq. Translations are available at
https://www.contributor-covenant.org/translations.)";

std::string MIT_LICENSE = R"(MIT License

Copyright (c) 2024 authorname

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.)";

std::string CONTRIBUTING_MD,
FEATURE_REQUEST_MD,
SECURITY_MD,
BUG_REPORT_MD,
CHANGELOG_MD;

void configure (){
    CHANGELOG_MD = 
"# Changelog for **" + repo_name + "**\n"
"\n"
"All notable changes to this project will be documented in this file.\n"
"\n"
"The format is based on [Keep a Changelog](https://keepachangelog.com/en/1.0.0/), and this project adheres to [Semantic Versioning](https://semver.org/).\n"
"\n"
"## [Unreleased]\n"
"\n"
"### Added\n"
"- New features or changes that have been added to the codebase.\n"
"\n"
"### Changed\n"
"- Updates to existing features or functionality.\n"
"\n"
"### Fixed\n"
"- Bug fixes or patches applied to the codebase.\n"
"\n"
"---\n"
"\n"
"## [1.0.0] - YYYY-MM-DD\n"
"\n"
"### Added\n"
"- Initial release of **" + repo_name + "**.\n"
"\n"
"---\n"
"\n"
"## [1.1.0] - YYYY-MM-DD\n"
"\n"
"### Added\n"
"- Feature 1: Description of the new feature.\n"
"- Feature 2: Description of another new feature.\n"
"\n"
"### Fixed\n"
"- Bug fix related to issue #XX.\n"
"\n"
"---\n"
"\n"
"## [1.1.1] - YYYY-MM-DD\n"
"\n"
"### Fixed\n"
"- Minor bug fix for compatibility with newer versions.\n"
"\n"
"---\n"
"\n"
"## [1.2.0] - YYYY-MM-DD\n"
"\n"
"### Changed\n"
"- Updated dependencies for better performance.\n"
"\n"
"---\n"
"\n"
"## Previous Releases\n"
"\n"
"For older versions of **" + repo_name + "**, see the [GitHub releases page](https://github.com/" + repo_lic + "/" + repo_name + "/releases).\n";

CONTRIBUTING_MD = 
"# Contributing to " + repo_name + "\n"
"\n"
"Thank you for considering contributing to **" + repo_name + "**! Here’s a quick guide to help you get started.\n"
"\n"
"---\n"
"\n"
"## Code of Conduct\n"
"\n"
"Please follow our [Code of Conduct](CODE_OF_CONDUCT.md) to maintain a respectful community.\n"
"\n"
"---\n"
"\n"
"## How to Contribute\n"
"\n"
"### Reporting Issues\n"
"- Search existing issues before opening a new one.\n"
"- Clearly describe the issue, steps to reproduce, and expected behavior.\n"
"\n"
"### Suggesting Features\n"
"- Open an issue with the label \"feature request.\"\n"
"- Include details about the problem and your proposed solution.\n"
"\n"
"### Submitting Changes\n"
"1. Fork the repository and create a branch:\n"
"   ```bash\n"
"   git checkout -b feature/your-feature-name\n"
"   ```\n"
"2. Commit your changes:\n"
"   ```bash\n"
"   git commit -m \"feat(scope): add feature description\"\n"
"   ```\n"
"3. Push your branch and open a pull request.\n"
"\n"
"---\n"
"\n"
"## Development Setup\n"
"\n"
"1. Clone the repository:\n"
"   ```bash\n"
"   git clone https://github.com/" + repo_lic + "/" + repo_name + ".git\n"
"   ```\n"
"2. Install dependencies and follow setup instructions in the `README.md`.\n"
"\n"
"---\n"
"\n"
"## Style Guide\n"
"\n"
"- Follow language-specific conventions (e.g., PEP 8 for Python, Google C++ Style Guide).\n"
"- Keep your code clean and well-documented.\n"
"\n"
"---\n"
"\n"
"## License\n"
"\n"
"By contributing, you agree that your changes will be licensed under the repository's [LICENSE](LICENSE).\n"
"\n"
"---\n";

SECURITY_MD = 
"# Security Policy\n"
"\n"
"Thank you for helping us keep **" + repo_name + "** secure! If you discover a security vulnerability, please follow the steps below to report it responsibly.\n"
"\n"
"---\n"
"\n"
"## Supported Versions\n"
"\n"
"We actively support the following versions:\n"
"- Latest release\n"
"- Previous major release\n"
"\n"
"Please update to the latest version to ensure you have the most secure and stable experience.\n"
"\n"
"---\n"
"\n"
"## Reporting a Vulnerability\n"
"\n"
"If you discover a security issue, please do not publicly disclose it. Instead, report it privately by:\n"
"- Sending an email to [security@" + repo_lic + ".com] with the subject: \"Security Issue in " + repo_name + "\"\n"
"- Including a detailed description of the issue and steps to reproduce it.\n"
"\n"
"We will acknowledge your report within 48 hours and work to resolve the issue as quickly as possible. You may be contacted for additional information during this process.\n"
"\n"
"---\n"
"\n"
"## General Guidelines\n"
"\n"
"- Use your findings only to report and resolve security issues.\n"
"- Do not exploit any vulnerability you discover.\n"
"- Respect the privacy and data of others.\n"
"\n"
"---\n"
"\n"
"Thank you for helping us make **" + repo_name + "** more secure!\n";

BUG_REPORT_MD = 
"# Bug Report\n"
"\n"
"Thank you for taking the time to report a bug in **" + repo_name + "**. Please follow the template below to provide all the necessary details for us to reproduce and fix the issue.\n"
"\n"
"---\n"
"\n"
"## Description\n"
"- **What is the issue?** Describe the problem clearly.\n"
"- **What did you expect to happen?**\n"
"- **What actually happened?**\n"
"\n"
"## Steps to Reproduce\n"
"Provide a detailed list of steps to reproduce the bug:\n"
"1. Go to '...'\n"
"2. Click on '...'\n"
"3. Observe '...'\n"
"\n"
"## Environment\n"
"- **Operating System:** [e.g., Windows, macOS, Linux]\n"
"- **Version/Commit:** [e.g., v1.2.3, commit hash]\n"
"- **Additional Context:** Any other details you think might be relevant.\n"
"\n"
"## Screenshots/Logs\n"
"If applicable, add screenshots or logs to help explain the issue.\n"
"\n"
"---\n"
"\n"
"Thank you for helping us improve **" + repo_name + "**!\n";

FEATURE_REQUEST_MD = 
"# Feature Request\n"
"\n"
"Thank you for suggesting a new feature for **" + repo_name + "**! Please use the template below to describe your idea in detail.\n"
"\n"
"---\n"
"\n"
"## Problem Description\n"
"- **What problem does this feature aim to solve?**\n"
"- **How does this problem affect you or others?**\n"
"\n"
"## Proposed Solution\n"
"- **Describe your proposed solution.** Be as detailed as possible.\n"
"- **Why do you think this is the best approach?**\n"
"\n"
"## Alternatives Considered\n"
"- **What other solutions have you considered?**\n"
"- **Why do you think they are less effective?**\n"
"\n"
"## Additional Context\n"
"Add any additional context, screenshots, or references to help explain the request.\n"
"\n"
"---\n"
"\n"
"Thank you for helping improve **" + repo_name + "**!\n";

}
#endif