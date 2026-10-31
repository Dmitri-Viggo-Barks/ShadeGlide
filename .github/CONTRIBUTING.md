# Contributing to ShadeGlide

Thank you for taking the time to contribute to the project! To maintain project quality and consistency, refer to the details below to contribute to the repository.
<br/>

| <strong>Code of Conduct</strong>|
| :---:|
| Please be respectful, constructive, and collaborative in all issues, PRs, and discussions. |
<br/>

<!-- TABLE OF CONTENTS -->
<details>
  <summary><strong>Table of Contents</strong></summary>
  <ol>
    <li><a href="#contribution-guidelines">Contribution Guidelines</a></li>
    <ol>
      <li><a href="#general-guidelines">General Guidelines</a></li>
      <li><a href="#types-of-contributions">Types of Contributions</a></li>
      <li><a href="#third-party-materials">Third-Party Materials</a></li>
    </ol>
    <li><a href="#firmware-development-guidelines">Firmware Development Guidelines</a></li>
    <ol>
      <li><a href="#coding-conventions">Coding Conventions</a></li>
      <li><a href="#hardware-interface-changes">Hardware Interface Changes</a></li>
      <li><a href="#build-requirements">Build Requirements</a></li>
    </ol>
    <li><a href="#hardware-development-guidelines">Hardware Development Guidelines</a></li>
    <ol>
      <li><a href="#electronics">Electronics</a></li>
      <li><a href="#mechanical-design">Mechanical Design</a></li>
      <li><a href="#hardware-validation">Hardware Validation</a></li>
    </ol>
    <li><a href="#development-setup">Development Setup</a>
    <ol>
      <li><a href="#project-required-tools">Project Required Tools</a></li>
      <li><a href="#scope-related-required-tools">Scope-Related Required Tools</a></li>
      <ol>
          <li><a href="#firmware-tools">Firmware Tools</a></li>
          <li><a href="#electronics-tools">Electronics Tools</a></li>
          <li><a href="#mechanical-tools">Mechanical Tools</a></li>
      </ol>
    </ol></li>
    <li><a href="#branch-naming-convention">Branch Naming Convention</a></li>
    <ol>
        <li><a href="#examples-of-branch-names">Examples of Branch Names</a></li>
    </ol>
    <li><a href="#commit-message-convention">Commit Message Convention</a></li>
    <ol>
        <li><a href="#examples-of-commit-messages">Examples of Commit Messages</a></li>
    </ol>
    <li><a href="#type-and-scope"><code>type</code> and <code>scope</code></a>
      <ol>
        <li><a href="#type"><code>type</code></a></li>
        <li><a href="#scope"><code>scope</code></a></li>
      </ol></li>
    <li><a href="#testing-and-validation">Testing and Validation</a></li>
    <ol>
      <li><a href="#firmware">Firmware</a></li>
      <li><a href="#electronics">Electronics</a></li>
      <li><a href="#mechanical-components">Mechanical Components</a></li>
      <li><a href="#documentation-and-tools">Documentation and Tools</a></li>
      <li><a href="#reporting-results">Reporting Results</a></li>
    </ol>
    <li><a href="#documentation-requirements">Documentation Requirements</a></li>
    <ol>
      <li><a href="#journals">Journals</a></li>
      <li><a href="#examples-of-journal-names">Examples of Journal Names</a></li>
    </ol>
    <li><a href="#issue-reporting">Issue Reporting</a></li>
    <ol>
      <li><a href="#bug-reports">Bug Reports</a></li>
    </ol>
    <li><a href="#pull-request-process">Pull Request Process</a></li>
    <ol>
      <li><a href="#before-opening-a-pull-request">Before Opening a Pull Request</a></li>
      <li><a href="#pull-request-description">Pull Request Description</a></li>
      <li><a href="#review-and-merging">Review and Merging</a></li>
    </ol>
  </ol>
</details>

---
<br/>


## Contribution Guidelines
Contributions should be focused, documented, and consistent with the project's existing architecture and conventions. To contribute properly, it is highly recommended to follow the general guidelines listed below.

### General Guidelines
- Review existing issues and documentation before proposing changes.
- For substantial changes, open an issue or discussion before beginning implementation.
- Create a separate branch for each task or group of closely related changes.
- Keep changes focused on the intended task.
- Avoid including unrelated modifications in the same commit or pull request.
- Preserve existing functionality unless a change is intentional and documented.
- Update relevant documentation when implementation details or interfaces change.
- Do not commit credentials, private keys, access tokens, or other sensitive information.
- Do not commit generated files or local development artifacts unless they are explicitly required by the project.

### Types of Contributions
As this project has an embedded systems nature that includes fields outside of software, different types of contributions can be done. Contributions may include:

- Firmware features, bug fixes, and refactoring.
- Electronic schematics and component documentation.
- Mechanical models, mounting designs, and enclosure improvements.
- Development utilities, scripts, and build configuration.
- Tests, technical documentation, and development journals.
- Bug reports and technical reviews.

Before introducing any major architectural change, consult the project maintainer ([@Dmitri-Viggo-Barks](https://github.com/Dmitri-Viggo-Barks)) to discuss its purpose, compatibility, and potential impact. <br/>

### Third-Party Materials
Contribution incorporating external code, libraries, CAD models, schematic symbols, images, or other materials must comply with their respective licensing requirements.
- Verify the source and applicable license before incorporating external materials.
- Preserve required copyright notices and attributions.
- Document external sources when appropriate.
- Do not include proprietary or restricted materials without authorization. <br/>
<br/>


## Firmware Development Guidelines
Firmware contributions must follow the project's established architecture, coding conventions, as well as hardware configuration. Each are detailed below.

### Coding Conventions
- Use C language features and conventions consistent with the existing firmware for the product.
- C++ or other languages can be used, but only restricted for testing and validation if higher-level or other languages are required or preferred.
- Follow the project's established code formatting rules.
- Use descriptive names for variables, functions, macros, and types.
- Prefer fixed-width integer types from `<stdint.h>` when the required integer width matters.
- Use appropriate constants and named definitions for hardware-related values instead of unexplained numeric literals.
- Keep functions focused on clearly defined responsibilities.
- Check return values and handle errors from hardware interfaces and system APIs where appropriate.
- Avoid unnecessary global state and unexplained dependencies between modules.
- Document non-obvious implementation decisions and hardware-specific assumptions.

### Hardware Interface Changes
When modifying GPIO assignments, sensor interfaces, motor control, or communication protocols:
- Verify compatibility with the target hardware and existing pin assigments.
- Update the relevant hardware configuration and documentation.
- Consider the effects on existing peripherals and shared interfaces.
- Account for startup behavior, communication failures, and unexpected operating conditions.
- Ensure that motor-control changes do not unintentionally activate the motor during initialization or error recovery.

### Build Requirements
Firmware changes should compile successfully using the documented ESP-IDF environment (see <i><a href="#firmware-tools">Firmware Tools</i></a> for more info) and target configuration. Include any new dependencies, configuration changes, or build instructions in the relevant project documentation. <br/>
<br/>
<strong>Do not claim that firmware has been tested on physical hardware unless the test was actually performed. Explicitly state that the firmware is untested on physical hardware if not yet. </strong> <br/>
<br/>


## Hardware Development Guidelines
Changes to electronic circuits, hardware configurations, or mechanical assemblies must be documented and checked for compatibility with the existing design. Refer below for details.

### Electronics
When modifying schematics, wiring, or component selections:
- Identify the affected components and connections.
- Verify component pinouts, voltage requirements, and electrical compatibility using reliable component documentation.
- Check power supply requirements and expected current consumption.
- Account for shared grounds, logic levels, and communication interfaces where applicable.
- Document component substitutions and any relevant differences in electrical characteristics.
- Update the schematic and related documentation when the implemented circuit changes.

<strong> Do not assume that two components are interchangeable solely because they serve the same general purpose. </strong> <br/>

### Mechanical Design
When modifying mechanical components:
- Identify the affected parts and assemblies.
- Document relevant dimensions, mounting interfaces, and clearances.
- Consider component tolerances, wheel alignment, mechanical stability, and accessibility for assembly.
- Identify potential interference with wiring, sensors, moving parts, and deployment-environment.
- Update associated models, drawings, or assembly instructions when necessary. <br/>

### Hardware Validation
Where practical, verify proposed changes through appropriate simulations, measurements, inspections, and physical tests. <br/>
<br/>
<strong>
Distinguish between a desgin that has been modeled, a design that has been assembled, and a design that has been physically tested.
</strong> <br/>
<br/>
Document any known limitations or unverified assumptions associated with the proposed changes. <br/>
<br/>


## Development Setup
Before contributing, ensure that the development envionment is configured for the components or work intended to modify or add.
<br/>

| <strong> Note </strong> |
| :----------: | 
| Since the project is still in progress, the required tools may change overtime |
<br/>


### Project Required Tools
Below are the tools required to be used to contribute to the project regardless of scope or aspect of the contribution.


| Tool    |     | Purpose |
| :-----: | --- | :------------: |
| Git     |     | Project's version control and branch management |
<br/>

### Scope-Related Required Tools
Shown below are the tools required for each scope of the project; tools for `firmware`, `electronics`, and `mechanical`.

#### `firmware` Tools
| Tool    |     | Purpose |
| :-----: | --- | :------------: |
| ESP-IDF (Official Espressif Systems IDE)/ <br/>Visual Studio Code + ESP-IDF Extension     |     | Microcontroller firmware developments and compilation <br/> environment for ESP32 Microcontroller Units |
| Python (ESP-IDF Compatible) |     | Running ESP-IDF utilities and supporting <br/>scripts for development files and programs |
<br/>

#### `electronics` Tools
| Tool    |     | Purpose |
| :-----: | --- | :------------: |
| KiCad (10.<i>x</i>.<i>y</i> or versions <br/> compatible with projects' files)     |     | Preferred program for electronics schematics <br/>and component symbol editing |
<br/>

#### `mechanical` Tools
&emsp;<strong><i>TO BE DETERMINED</i></strong><br/>
<br/>

### Repository Setup
Detailed below are the instructions to create a dedicated personal or separate development environment. <br/>
1. Fork or clone the repository.
2. Create a branch following the project's branch naming convention. (see <i><a href="#branch-naming-convention">Branch Naming Convention</i></a> for more info)
3. Configure the development tools required for your contributions. (refer to this section, <i><a href="#development-setup">Development Setup</a></i>)
4. Review the existing implementations and relevant documentation before making changes.
5. Follow the applicable contribution and validation guidelines. (see previous sections and <i><a href="#testing-and-validation">Testing and Validation</a></i>)

<strong>AVOID</strong> committing generated build artifacts, temporary files, local environment configurations, or files excluded by `.gitignore`. Git Submodules are also not preferred but can be used, though only sparingly. <br/>
<br/>


## Branch Naming Convention
To protect `main` branch, create a separate branch for each task or group of related changes before merging into `main`.

The format for naming branches: <br/>
&emsp;`<type>/<scope>-<short description>`

### Examples of Branch Names
`feat/firmware-motor-control` <br/>
`fix/mechanical-layer-reallocation` <br/>
`refactor/docs-directory-reorganization` <br/>
`docs/hardware-schematic-symbols-info` <br/>


Although development journals can be included in the developing branch, it is preferred to have its dedicated branch. See <i><a href="#documentation-requirements">Documentation Requirements</a></i> for more information.<br/>
<br/>

## Commit Message Convention
To easily identify and isolate related changes, the format for creating the commit message follows the <strong>Conventional Commits</strong> format.

The format for creating a commit message: <br/>
&emsp;`<type>(<scope>): <brief description>`

Commit messages must be brief and in the present tense.

### Examples of Commit Messages
`test(tools): verify compatibility with electronic components` <br/>
`chore(repo): update gitignore rules` <br/>
`build(mechanical): update sensor mount enclosure for tolerance` <br/>
`ci(firmware): cache ESP-IDF tools for esp32c3 builds` <br/>
<br/>

## `<type>` and `<scope>`
The previous two sections (<i><a href="#branch-naming-convention">Branch Naming Convention</a></i> and <i><a href="#commit-message-convention">Commit Message Convention</a></i>) uses "type" and "scope" for their naming conventions, this section will go over the terms that would be used in those input fields.

### `<type>`
This refers to the <strong>Type</strong> of changes done in the branch or commit. <br/>

| Type       |     | Purpose |
| :---:      | --- | :---: |
| `feat`     |     | Introduce a system feature or physical capability |
| `fix`      |     | Correct a defect |
| `test`     |     | Add or modify tests |
| `refactor` |     | Restructure or improve files without intentionally <br/>altering intended functionality |
| `build`    |     | Update project configurations, firmware <br/> dependencies, ormanufacturing settings |
| `ci`       |     | Change continuous integration workflows |
| `docs`     |     | Change certain documentation |
| `chore`    |     | General repository maintenance |
<br/>

### `<scope>`
This refers to the <strong>Scope</strong> of the changes done in the branch or commit. <br/>

| Scope           |     | Covers |
| :---:           | --- | :---: |
| `firmware`      |     | Embedded software for the programmable electronic components |
| `electronics`   |     | Schematics, electrical components, and physical electrical wiring |
| `mechanical`    |     | CAD models, 3D-print parts, and mechanical assemblies |
| `documentation` |     | Journals, guides, and general documentation |
| `tools`         |     | Development utilities and supporting scripts |
| `repo`          |     | Repository configuration and maintenance | 
<br/>

<br/>


## Testing and Validation
Contributors are responsible for validating their changes to a reasonable extent before submitting a pull request. <br/>
<br/>
Validation requirements depend on the affected subsystem and the nature of the modification. <br/>

### Firmware
Where applicable:
- Build the firmware using the documented target configuration.
- Resolve compilation errors introduced by the changes.
- Run relevant automated tests.
- Check error handling and boundary conditions.
- Verify compatibility with affected hardware interfaces.
- Perform physical hardware tests when necessary and when the hardware is available.
<br/>

### Electronics
Where applicable:
- Check schematic connectivity and component pin assignments.
- Verify electrical specifications and power requirements.
- Run applicable schematic checks or simulations.
- Document any electrical assumptions that have not been verified.
<br/>

### Mechanical Components
Where applicable:
- Verify dimensions, mounting interfaces, and assembly clearances.
- Inspect for interference with adjacent components.
- Validate fit and movement through simulation, inspection, or physical assembly as appropriate.
<br/>

### Documentation and Tools
- Check links, file references, and formatting.
- Verify scripts or utilities when they are executable or otherwise testable.
- Ensure that documentation reflects the actual implementation.
<br/>

### Reporting Results
Implementations that pass all the tests required for validation is considered `Passed`. However, when implementations fail at least one test, they are considered `Failed`. After performing tests, include the relevant validation results in the pull request. <br/>
<br/>
Clearly distinguish between:
- `Passed`: The tests were performed and passed.
- `Failed`: The tests were performed and did not pass.
- `Not Tested`: The tests were not performed.
- `Not Applicable`: The check does not apply to the proposed changes. <br/>

<strong>
Do not report a test as passed unless it was actually performed.
</strong>
<br/>
<br/>


## Documentation Requirements
Documentation should accurately reflect the current implementation and design decisions. Update the relevant documentation when a contribution changes:<br/>
- Hardware pin assignments or electrical connections. 
- Component selections, specifications, or power requirements.
- Firmware architecture, interfaces, or operating behavior.
- Mechanical dimensions, mounting arrangements, or assembly procedures.
- Development setup, dependencies, or build instructions.
- Testing procedures, validation results, or known limitations.

When a design decision changes, update the authoritative documentation so that outdated information does not remain presented as the current implementation.

Use clear file names, meaningful headings, and relative links where appropriate. Keep supporting images, diagrams, and other assets organized in the relevant documentation directories.

### Journals
Development journals should record meaningful progress, experiments, design decisions, and relevant findings rather than merely restating code changes. A journal should discuss on the happened changes or updates done to the overall project. Its content's nature can be general or specific. <br/>

Each journal entry should only be made after each project's milestone or major development, it should not discuss individual developments. Individual developments can be discussed together in one journal entry. <br/>

Preferrably, a journal entry is made after merging a branch for a major implementation or change to the project. This journal should contain the rationale and decisions done throughout the contribution, as well as function or behavior of what was contributed.

Each journal entry must follow the format: <br/> 
&emsp; `<journal sequence number>-<title in kebab-case>.md`

, with the journal sequence number in a 3 digit format with zeroes padding unused spaces.

### Examples of Journal Names
`009-updated-electronics-overview-schematic.md` <br/>
`043-replaced-glizzy-gobbler-module.md` <br/>
`175-beginning-of-mechanical-design.md` <br/>

A template for development journals can be found in -----.

| Note |
| :---: |
| Documentation does not only come in Journals. Dedicated files for documentation are encouraged, provided they are focused on only a specific case and are contained in a dedicated directory in `docs/` (contained in the root `docs/` or a made directory) |
<br/>
<!-- TODO: link the docs/ directory -->
<br/>


## Issue Reporting
Before opening an issue, check existing issues and documentation to determine whether the problem or proposal has already been addressed. <br/>

### Bug Reports
A useful bug report should include, where applicable:
- A clear description of the observed problem.
- The expected behavior and actual behavior.
- Steps to reproduce the problem.
- The affected subsystem and hardware configuration.
- Relevant firmware, toolchain, or component versions.
- Error messages, logs, photographs, or other supporting evidence.
- Any troubleshoting steps already performed. <br/>
&emsp;<strong>For Hardware-Related Problems:</strong>
- Include relevant wiring, power conditions, and physical observations when available.

## Pull Request Process
The `main` branch is protected, no commits can be done directly on it. Contributors must submit changes through a pull request of their branch rather than committing directly to `main`. <br/>
<br/>

### Before Opening a Pull Request
Below enumerates what a contributor has to do before opening a pull request for their branch.
- Ensure that the branch follows the project's naming convention. (see <i><a href="#branch-naming-convention">Branch Naming Convention</i></a> for more info)
- Ensure that commits follow the project's commit message convention. (see <i><a href="#commit-message-convention">Commit Message Convention</i></a> for more info)
- Review the changes for unrelated modifications, temporary files, and accidental secrets.
- Perform the applicable validation checks (see <i><a href="#testing-and-validation">Testing and Validation</i></a> for more info)
- Update relevant documentation and supporting files.
- Ensure that the pull request targets the appropriate base branch.

### Pull Request Description
Each pull request must clearly explain listed below. A template of a pull request is at `.github/PULL_REUEST_TEMPLATE.md`.
<!-- TODO: embed ts -->

- <strong>Summary</strong>: What was changed?
- <strong>Motivation</strong>: Why was the change necessary?
- <strong>Affected Areas</strong>: Which subsystems or directories were modified?
  - How they were modified?
  - What tests were performed and there results?
- <strong>Documentation</strong>: Which documentation files were updated, if applicable?
- <strong>Limitations</strong>: Are there known issues, untested behaviors, or outstanding tasks?
<br/>

### Review and Merging
Pull requests must be reviewed before merging. <br/>
<br/>
For a solo-developed project, the author should perform a thorough self-review. When additional contributors are available, obtain an independent review from another contributor before merging. <br/>
<br/>
Reviewers should consider correctness, compatibility, maintainability, documentation, and the results of relevant validation checks. Address significant review feedback before merging. If changes are requested, update the pull request and repeat any validation affected by those changes.<br/>
<br/>
<strong>Merge only after the applicable review and repository requirements have been satisfied.</strong>

<br/> <br/>
---

### END OF DOCUMENT