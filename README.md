<a id="readme-top"></a>


<div align="center">

[![Contributors][contributors-shield]][contributors-url] &emsp; [![License][license-shield]][license-url]

</div>




<!-- PROJECT LOGO -->
<br />
<div align="center">
  <a href="https://github.com/Dmitri-Viggo-Barks/ShadeGlide">
    <img src="docs/readme-assets/logo.png" alt="Logo" width="80" height="80">
  </a>

  <h3 align="center">ShadeGlide</h3>

  <p align="center">
    An embedded systems project that includes firmware, electronics, and mechanical fabrication.
    <br />
    <a href="https://github.com/Dmitri-Viggo-Barks/ShadeGlide"><strong>Explore the repository »</strong></a>
    <br />
    <a href="https://github.com/Dmitri-Viggo-Barks/ShadeGlide/tree/main/docs/demo.mp4">View Project Demo</a>
  </p>
</div>



<!-- TABLE OF CONTENTS -->
<details>
  <summary>Table of Contents</summary>
  <ol>
    <li>
      <a href="#about-the-project">About The Project</a>
    </li>
    <li>
      <a href="#getting-started">Getting Started</a>
      <ul>
        <li><a href="#prerequisites">Prerequisites</a></li>
        <li><a href="#installation">Installation</a></li>
      </ul>
    </li>
    <li><a href="#usage">Usage</a></li>
    <li><a href="#roadmap">Roadmap</a></li>
    <li><a href="#contributing">Contributing</a></li>
    <li><a href="#license">License</a></li>
    <li><a href="#contact">Contact</a></li>
    <li><a href="#acknowledgments">Acknowledgments</a></li>
  </ol>
</details>



<!-- ABOUT THE PROJECT -->
## About The Project
<div align="center">

![Project Graphic][Project-Graphic]

</div>

<strong>ShadeGlide</strong> is an open-source personal <strong>embedded systems</strong> project that creates a small, lightweight bot that moves from side to side along a curtain railing to <strong>open or close a curtain</strong>, <strong>wirelessly controlled</strong> by a smart switch.
<br/>
<br/>
The project creates two products, a Rail Bot and a Smart Switch. Both are controlled by an <strong>ESP32-C3 Super Mini</strong> MCU, with the Smart Switch'es MCU commanding the Rail Bot's MCU using <strong>Bluetooth Low Energy</strong>. The Rail Bot moves using a <strong>GA-12 N20 DC Motor</strong> driven by a <strong>DRV8833 Motor Driver Breakout Module</strong>. When the Rail Bot moves, it stops when obstructions are on its way through its <strong>VL53L0X ToF Sensor module</strong>. Both products being powered by a rechargeable Lithium-ion battery.


<div align="center">

<h3 align="center">Topics in this Project</h3>

![3d--printing-topic][3d--printing-topic-Badge]
![bare--metal-programming-topic][bare--metal-programming-topic-Badge]
![bluetooth-low-energy-topic][bluetooth-low-energy-topic-Badge]
![curtain-bot-topic][curtain-bot-topic-Badge]
![electronics-topic][electronics-topic-Badge]
![embedded-systems-topic][embedded-systems-topic-Badge]
![esp--idf-framework-topic][esp--idf-framework-topic-Badge]
![esp32--c3-topic][esp32--c3-topic-Badge]
![esp32--c3-super-mini-topic][esp32--c3-super-mini-topic-Badge]
![firmware-development-topic][firmware-development-topic-Badge]
![hardware-topic][hardware-topic-Badge]
![microcontroller-programming-topic][microcontroller-programming-topic-Badge]
![wireless-communication-topic][wireless-communication-topic-Badge]

</div>
<br/>


### Built With
<div align="center">

![VSCode][VSCode-Badge] &ensp;
![Espressif][Espressif-Badge] &ensp;
![KiCad][KiCad-Badge] &ensp;
![CMake][CMake-Badge] &ensp;
![ESP--IDF-IDE][ESP--IDF-IDE-Badge]

</div>


### Built In
<div align="center">

![ESP--IDF-VSCode-Extension][ESP--IDF-VSCode-Extension-Badge]![VSCode-Extension][VSCode-Extension-Badge] &ensp;
![C][C-Badge] &ensp;
![RISC--V][RISC--V-Badge]

</div>


### Tested With and In
<div align="center">

![Arduino IDE][Arduino-IDE-Badge] &ensp;
![Adafruit][Adafruit-Badge] &ensp;
![C++][C++-Badge] <br/>
<strong> and physical hardware validation and debugging </strong>

</div>


### Documented In

<div align="center">

![Git][Git-Badge] &ensp;
![GitHub][GitHub-Badge] &ensp;
![Markdown][Markdown-Badge]

</div>


<p align="right">(<a href="#readme-top">back to top</a>)</p>

<!-- USAGE EXAMPLES -->
## Usage - How to Use
Use a <strong>18650 Protected 3.7V 2200mAh Lithium-ion Battery</strong> for both the Rail Bot and Smart Switch. <strong>Inspect the batteries for any damages, using a damaged or faulty battery can cause damage to the components of either product.</strong>  Ensure the batteries of both the Rail Bot and Smart Switch are charged before use.

1. Install the Rail Bot on the curtain rail, ensure the wheels clinch on the railing adequately.
2. Flip the Rail Bot's power switch on.
3. Flip the Smart Switch'es power switch on.
4. ...

<div align="center">

![Usage Instruct GIF][Usage-Instruct-GIF]

</div>

<p align="right">(<a href="#readme-top">back to top</a>)</p>


<!-- GETTING STARTED -->
## Getting Started
<!-- 
This is an example of how you may give instructions on setting up your project locally.
To get a local copy up and running follow these simple example steps.

### Prerequisites

This is an example of how to list things you need to use the software and how to install them.
* npm
  ```sh
  npm install npm@latest -g
  ```

### Installation

_Below is an example of how you can instruct your audience on installing and setting up your app. This template doesn't rely on any external dependencies or services._

1. Get a free API Key at [https://example.com](https://example.com)
2. Clone the repo
   ```sh
   git clone https://github.com/github_username/repo_name.git
   ```
3. Install NPM packages
   ```sh
   npm install
   ```
4. Enter your API in `config.js`
   ```js
   const API_KEY = 'ENTER YOUR API';
   ```
5. Change git remote url to avoid accidental pushes to base project
   ```sh
   git remote set-url origin github_username/repo_name
   git remote -v # confirm the changes
   ``` -->

<p align="right">(<a href="#readme-top">back to top</a>)</p>



<!-- ROADMAP -->
## Roadmap

- [ ] Determine Rail Bot Electronic Components
    - [ ] Acquire Electronic Components
    - [ ] Test and Validate Electronic Components
    - [ ] Prototype Testing
- [ ] Develop Rail Bot Firmware
    - [ ] Driver development and Testing
    - [ ] BLE Communication
    - [ ] Application Logic
    - [ ] Startup and Initialization
- [ ] Determine Smart Switch Electronic Components
    - [ ] Acquire Electronic Components
    - [ ] Test and Validate Electronic Components
    - [ ] Prototype Testing
- [ ] Develop Smart Switch Firmware
    - [ ] BLE Communication
    - [ ] Application Logic
    - [ ] Startup and Initialization
- [ ] Fabricate Rail Bot Body
- [ ] Fabricate Smart Switch Body
- [ ] Deployment-Environemnt Testing
    - [ ] Scenario Testing
    - [ ] Troubleshooting


<p align="right">(<a href="#readme-top">back to top</a>)</p>



<!-- CONTRIBUTING -->
## Contributing

Before contributing to the project, read and refer to the project's contributing guidelines in `../.github/`: [`CONTRIBUTING.md`](../.github/CONTRIBUTING.md). <strong> If the contributor is outside the project's main team, fork the project and begin working there. </strong> Below is a brief process for contributing:

1. <strong>Create and Work on a New Branch</strong> <br/>
```bash
    # 1. Ensure the Feature Branch branches off of the base branch `main`.
    git checkout main                   # or `git switch main`

    # 2. Create and switch to the new branch, replace 'branch-name' with the created branch'es name.
    git checkout -b branch-name         # or `git switch -c branch-name

    # 3. Push the branch to the repository, replace 'branch-name' with the created branch'es name.
    git push -u origin branch-name
```


2. Commit your Changes (follow the project's Commit Conventions in [`CONTRIBUTING.md`](../.github/CONTRIBUTING.md))
4. Push to the Branch
5. Open a Pull Request (follow the project's Pull Request Conventions in [`CONTRIBUTING.md`](../.github/CONTRIBUTING.md))

### Contributors:

<a href="https://github.com/oDmitri-Viggo-Barks/ShadeGlide/graphs/contributors">
  <img src="https://contrib.rocks/image?repo=Dmitri-Viggo-Barks/ShadeGlide" alt="contrib.rocks image" />
</a>

<p align="right">(<a href="#readme-top">back to top</a>)</p>



<!-- LICENSE -->
## License

Distributed under the MIT License. See [`LICENSE`](../LICENSE) for more information.

<p align="right">(<a href="#readme-top">back to top</a>)</p>





<!-- ACKNOWLEDGMENTS -->
## Acknowledgments

<!-- Use this space to list resources you find helpful and would like to give credit to. I've included a few of my favorites to kick things off!

* [Choose an Open Source License](https://choosealicense.com)
* [GitHub Emoji Cheat Sheet](https://www.webpagefx.com/tools/emoji-cheat-sheet)
* [Malven's Flexbox Cheatsheet](https://flexbox.malven.co/)
* [Malven's Grid Cheatsheet](https://grid.malven.co/)
* [Img Shields](https://shields.io)
* [GitHub Pages](https://pages.github.com)
* [Font Awesome](https://fontawesome.com)
* [React Icons](https://react-icons.github.io/react-icons/search) -->

<p align="right">(<a href="#readme-top">back to top</a>)</p>



<!-- MARKDOWN LINKS & IMAGES -->
<!-- https://www.markdownguide.org/basic-syntax/#reference-style-links -->
[contributors-shield]: https://img.shields.io/github/contributors/Dmitri-Viggo-Barks/ShadeGlide.svg?style=for-the-badge
[contributors-url]: https://github.com/Dmitri-Viggo-Barks/ShadeGlide/graphs/contributors
[license-shield]: https://img.shields.io/github/license/Dmitri-Viggo-Barks/ShadeGlide.svg?style=for-the-badge
[license-url]: https://github.com/Dmitri-Viggo-Barks/ShadeGlide/blob/master/LICENSE.txt


[project-graphic]: docs/readme-assets/project-graphic.png


[3d--printing-topic-Badge]: https://img.shields.io/badge/-3d--printing-green?style=flat
[bare--metal-programming-topic-Badge]: https://img.shields.io/badge/-bare%20metal%20programming-green?style=flat
[bluetooth-low-energy-topic-Badge]: https://img.shields.io/badge/-bluetooth%20low%20energy-green?style=flat
[curtain-bot-topic-Badge]: https://img.shields.io/badge/-curtain%20bot-green?style=flat
[electronics-topic-Badge]: https://img.shields.io/badge/-electronics-green?style=flat
[embedded-systems-topic-Badge]: https://img.shields.io/badge/-embedded%20systems-green?style=flat
[esp--idf-framework-topic-Badge]: https://img.shields.io/badge/-esp--idf%20framework-green?style=flat
[esp32--c3-topic-Badge]: https://img.shields.io/badge/-esp32--c3-green?style=flat
[esp32--c3-super-mini-topic-Badge]: https://img.shields.io/badge/-esp32--c3%20super%20mini-green?style=flat
[firmware-development-topic-Badge]: https://img.shields.io/badge/-firmware%20development-green?style=flat
[hardware-topic-Badge]: https://img.shields.io/badge/-hardware-green?style=flat
[microcontroller-programming-topic-Badge]: https://img.shields.io/badge/-microcontroller%20programming-green?style=flat
[wireless-communication-topic-Badge]: https://img.shields.io/badge/-wireless%20communication-green?style=flat


[VSCode-Badge]: https://custom-icon-badges.demolab.com/badge/Visual%20Studio%20Code-0078d7.svg?style=for-the-badge&logo=visualstudiocode&logoColor=white
[Espressif-Badge]: https://img.shields.io/badge/espressif-%23E7352C.svg?style=for-the-badge&logo=espressif&logoColor=white
[KiCad-Badge]: https://img.shields.io/badge/kicad-%23314CB0.svg?style=for-the-badge&logo=kicad&logoColor=white
[CMake-Badge]: https://img.shields.io/badge/CMake-%23008FBA.svg?style=for-the-badge&logo=cmake&logoColor=white
[ESP--IDF-IDE-Badge]: https://img.shields.io/badge/-ESP--IDF%20IDE-white?style=for-the-badge&logo=Espressif

[ESP--IDF-VSCode-Extension-Badge]: https://img.shields.io/badge/🞧-white?style=for-the-badge&logo=Espressif
[VSCode-Extension-Badge]: https://custom-icon-badges.demolab.com/badge/-ESP--IDF%20VSCode%20Extension-0078d7.svg?style=for-the-badge&logo=visualstudiocode&logoColor=white
[C-Badge]: https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white
[RISC--V-Badge]: https://img.shields.io/badge/riscv-%23283272.svg?style=for-the-badge&logo=riscv&logoColor=white

[Arduino-IDE-Badge]: https://img.shields.io/badge/Arduino%20IDE-%2300979D.svg?style=for-the-badge&logo=Arduino&logoColor=white
[Adafruit-Badge]: https://img.shields.io/badge/-Adafruit-080807?style=for-the-badge&logo=adafruit
[C++-Badge]: https://img.shields.io/badge/c%2B%2B-%2300599C.svg?style=for-the-badge&logo=cplusplus&logoColor=white

[Git-Badge]: https://img.shields.io/badge/git-%23F05033.svg?style=for-the-badge&logo=git&logoColor=white
[GitHub-Badge]: https://img.shields.io/badge/github-%23121011.svg?style=for-the-badge&logo=github&logoColor=white
[Markdown-Badge]: https://img.shields.io/badge/-markdown-080807?style=for-the-badge&logo=markdown


[Usage-Instruct-GIF]: docs/readme-assets/usage-instruct.gif