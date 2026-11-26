# Firmware Overview

## Firmware Framework
The firmware for the Rail bot uses a combination of two development frameworks, acting as a hybrid functioning together. A <strong>Bare-Metal Approach</strong> framework is used on implementations that require no relatively complex workflow or dependencies. Then the <strong>ESP-IDF API</strong> framework is used on the rest of the implementations, including the startup behavior and entry, BLE communications, and other implementations that require a heavy load of dependencies which the ESP-IDF API conveniently provides.

<br/>

## Category Directories
The firmware files are divided into four directories based on their use as categories. The table below summarizes this:

| Category Directory		| Role																	|
| :-----------------------: | :-------------------------------------------------------------------: |
| `main/`					| <strong>Application Layer</strong>: entry point and core logic		|
| `components/rb_bsp/`		| <strong>Board Support Package</strong>: hardware-specific peripherals |
| `components/rb_drivers/`	| <strong>Hardware Drivers</strong>: peripheral wrappers and drivers	|
| `components/rb_services/`	| <strong>Middleware Services</strong>: communication protocol handling	|

<br/>

## Programming Implementation
Below enumerates how each firmware source is programmed:

| Sources				| Implementation	|
| :-------------------: | :---------------: |
| `main.c`				| ESP-IDF API		|
| `bot_controller.c`	| Standard C		|
| `rb_config.h`			| Macros			|
| `rb_ble_comms/`		| ESP-IDF API		|
| `rb_motor_driver/`	| Bare-Metal C		|
| `rb_i2c_driver/`		| Bare-Metal C		|
| `rb_gpio_driver/`		| Bare-Metal C		|
| `rb_vl53l0x_driver/`	| Standard C		|
| `status-indicator/`	| Bare-Metal C		|

<br/>

## File Structure
The dropdown below shows the planned structure of the codebase.

<details>
	<summary>File Structure</summary>

```
		rail-bot/
		│
		├── main/
		│	│
		│	├── main.c
		│	│
		│	├── bot-controller.c
		│	├── bot-controller.h
		│	│
		│	└── CMakeLists.txt
		│
		├── components/
		│	│	
		│	├── rb_bsp/
		│	│	│
		│	│	├── rb_config.h
		│	│	│
		│	│	├── rb_bsp_init.c
		│	│	├── rb_bsp_init.h
		│	│	│
		│	│	├── esp32c3_gpio_regs.h
		│	│	├── esp32c3_i2c_regs.h
		│	│	│
		│	│	├── status_indicator.c
		│	│	├── status_indicator.h
		│	│	│
		│	│	└── CMakeLists.txt
		│	│
		│	├── rb_drivers/
		│	│	│
		│	│	├── rb_gpio_driver/
		│	│	│	│
		│	│	│	├── rb_gpio_driver.c
		│	│	│	├── rb_gpio_driver.h
		│	│	│	│
		│	│	│	└── CMakeLists.txt
		│	│	│
		│	│	├── rb_i2c_driver/
		│	│	│	│
		│	│	│	├── rb_i2c_driver.c
		│	│	│	├── rb_i2c_driver.h
		│	│	│	│
		│	│	│	└── CMakeLists.txt
		│	│	│
		│	│	├── rb_motor_driver/
		│	│	│	│
		│	│	│	├── rb_motor_driver.c
		│	│	│	├── rb_motor_driver.h
		│	│	│	│
		│	│	│	└── CMakeLists.txt
		│	│	│
		│	│	└── rb_vl53l0x_driver/
		│	│		│
		│	│		├── rb_vl53l0x_driver.c
		│	│		├── rb_vl53l0x_driver.h
		│	│		│
		│	│		└── CMakeLists.txt
		│	│
		│	├── rb_services/
		│	│	│
		│	│	└── rb_ble_comms/
		│	│		│
		│	│		├── rb_ble_comms.c
		│	│		├── rb_ble_comms.h
		│	│		│
		│	│		└── CMakeLists.txt
		│	│
		│	└── rb_soc/
		│		│
		│		├── esp32c3_gpio_regs.h
		│		├── esp32c3_i2c_regs.h
		│		│
		│		└── CMakeLists.txt
		│
		└── CMakeLists.txt
```
</details>

<br/>


# `main/` Source Files
wip

<br/>

# `components/rb_bsp/` Source Files
wip

<br/>

# `components/rb_drivers/` Source Files
wip

<br/>

# `components/rb_services/` Source Files
wip

<br/>

<br/> <br/>
---

### END OF DOCUMENT
