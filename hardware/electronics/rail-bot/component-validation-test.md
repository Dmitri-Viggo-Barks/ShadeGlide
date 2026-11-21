# Rail Bot Electronic Component Validation Testing

## Equipment Needed
The following equipment are needed for testing:
- Digital Multimeter
- Power Supply Unit (Bench/etc.)
- Jumper Wires
- Breadboard (Optional, for circuit prototyping)
- Resistor (For Load Testing)
<br/>

---
<br/>
<a id="component-list"></a>

<div align=center>
<details>
  <summary>Components List</summary>
  <ol>
    <li><a href="#battery-cell-18650-37v-protected-lithium-ion-cell">Battery Cell: 18650 3.7V Protected Lithium-ion Cell</a></li>
    <li><a href="#logic-buck-boost-converter-xl63020-w-ti-tps63020-bbc-module">Logic Buck-Boost Converter: XL63020 w/ TI TPS63020 BBC Module</a></li>
    <li><a href="#motor-buck-boost-converter-b6284o-adjustable-output-bbc-module">Motor Buck-Boost Converter: B6284o Adjustable Output BBC Module</a></li>
    <li><a href="#microcontroller-unit-esp32-c3-super-mini">Microcontroller Unit: ESP32-C3 Super Mini</a></li>
    <li><a href="#time-of-flight-sensor-vl53l0x-tof-laser-range-sensor-module">Time-of-Flight Sensor: VL53L0X ToF Laser-Range Sensor Module</a></li>
    <li><a href="#motor-driver-drv8833-h-bridge-motor-driver-breakout-module">Motor Driver: DRV8833 H-Bridge Motor Driver Breakout Module</a></li>
    <li><a href="#dc-motor-ga12-n20-1100-rr-dc-micro-motor">DC Motor: GA12-N20 1:100 RR DC Micro Motor</a></li>
    <li><a href="#status-led-through-hole-led">Status LED: Through-Hole LED</a></li>
    <li><a href="#status-buzzer-active-piezo-buzzer">Status Buzzer: Active Piezo Buzzer</a></li>
  </ol>
</details>
</div>

<br/>

---


## Battery Cell: 18650 3.7V 5800mAh Protected Lithium-ion Cell
- [ ] Physical Inspection
    - [ ] No dents, corrosion, leakage, or unusual swelling
    - [ ] Both terminals and insulating ring are intact

<br/>
Inspect the battery's charging device before proceeding to the next test and ensure it is the proper charging device for the battery, the next test involves charging the battery. Charging the battery with a faulty, damaged, or with an improper charging device could damage the battery and pose significant danger to anyone nearby.

- [ ] Recharge Behavior
    - [ ] No unusual heating when charging
    - [ ] No unusual noise, whistling, or sizzling is heard when charging
    - [ ] No unusual coloring is seen when charging

<br/>
Charge the battery only after the <strong>Physical Inspection</strong> and <strong>Recharge Behavior</strong> tests are passed, charging the battery when it failed the previous tests poses significant danger. Proceed to this test after charging.

- [ ] Voltage Output
    - [ ] Output voltage lies between 3.5V-4.2V
    - [ ] No sudden voltage drop after being left for 24-48 hrs with no connected load

<br/>

- [ ] Controlled oading for Current Capacity
    - [ ] Battery lasts enough to closely match 2200mAh

<br/>

### End of Tests
<p align="right">(<a href="#component-list">back to components list</a>)</p>
<br/>


## Logic Buck-Boost Converter: XL63020 w/ TI TPS63020 BBC Module
- [X] Physical Inspection
    - [X] No dents or damage
    - [X] No unintended or expected solder bridges
    - [X] If pins are soldered, no bent pins
    - [X] All pins match documented pins
    - [X] No unusual connections to pins and components on the board

<br/>

Proceed to the next tests only after the board passes the `Physical Inspection` test. Connect the board to a controlled power supply. Set voltage input as expected voltage output from battery, and set current limit to 300mA as the first test is done under no load. Leave the output terminals disconnected. Positive terminal (power supply) connects to VIN (board), Negative terminal (power supply) connects to GND (board).

- [ ] No-Load and PS off Voltage Output
    - [ ] Voltage-output is expected, ~3.3V

- [ ] No-Load and PS off Behavior
    - [ ] No unusual heating or brightening of components
    - [ ] No unusual sounds

<br/>

Proceed to the next tests only after the board passes the `No-Load Voltage Output` test. Connect the outputs of the board to a load. For simplicity, use a resistor with a resistance $R$ that is close and above $R_m = \frac{v^2}{P} = \frac{3.7^2}{P}$ as the load. Refer to the resistor's data sheet or do a physical inspection to determine its rated wattage $P$.

- [ ] Loaded and PS off Voltage Output
    - [ ] Voltage-output is expected, ~3.3V

- [ ] Loaded and PS off Behavior
    - [ ] No unusual heating or brightening of components
    - [ ] No unusual sounds

<br/>

- [ ] Operation Behavior
    - [ ] Voltage-output is expected at input voltage ranging from the board's minimum voltage input rating until 3.7V
    - [ ] Voltage-output is expected at input voltage ranging from 3.7V until safely close to the board's maximum voltage input rating <strong><br/>(DO NOT EXCEED THE RATED MAXIMUM, IT IS ADVISED TO TEST UNTIL SAFELY CLOSE TO IT TO AVOID DAMAGING THE BOARD)</strong>

<br/>

<i> (This project does not use the Power-save Mode the board provides, hence the next four tests are optional until the said mode will be used) </i> <br/>
Before proceeding to the next four tests: disconnect the board from the power supply, temporarily bridge the PS pad in the board, then reconnect the power supply back to the board. Disconnect any load from the board before proceeding.

- [ ] No-Load and PS ON Voltage Output
    - [ ] Voltage-output is expected, ~3.3V

- [ ] No-Load and PS ON Behavior
    - [ ] No unusual heating or brightening of components
    - [ ] No unusual sounds

<br/>

Connect the outputs of the board to a low-load, low-load in this case makes it so the output current of the board does not exceed 100mA. For simplicity, use a resistor with a resistance $R$ that is close and above $R_m = \frac{v^2}{P} = \frac{3.7^2}{P}$ as the load, but makes $I < 0.1$ when $R$ is plugged in $I = \frac{v}{R}$. Refer to the resistor's data sheet or do a physical inspection to determine its rated wattage $P$

- [ ] Loaded and PS ON Voltage Output
    - [ ] Voltage-output is expected, ~3.3V

- [ ] Loaded and PS ON Behavior
    - [ ] No unusual heating or brightening of components
    - [ ] No unusual sounds

<br/>



### End of Tests
<p align="right">(<a href="#component-list">back to components list</a>)</p>
<br/>


## Motor Buck-Boost Converter: B6284o Adjustable Output BBC Module



## Microcontroller Unit: ESP32-C3 Super Mini
- [X] Physical Inspection
    - [X] No dents or damage
    - [X] No solder bridges
    - [X] If pins are soldered, no bent pins
    - [X] USB-C port and connector are firmly attached
    - [X] All pins match documented pins
    - [X] No unusual connections to pins and components on the board

<br/>

Proceed to the next tests only after the board passes the `Physical Inspection` test. Connect the board to the development machine using its USB port.

- [X] Board Recognition
    - [X] On-board LED lights up
    - [X] USB driver recognizes the board as serial device without errors
    - [X] If came as pre-flashed with on-board LED blinking, preflashed firmware runs

<br/>

- [X] Power Pins Voltage-Outputs
    - [X] 3V3 pin outputs ~3.3V
    - [X] 5V pin outputs ~5V

<br/>
Flash and run a test program to the board.

- [X] Flashing Ability
    - [X] Flashing is successful
    - [X] ESP-IDF `hello_world` example runs expectedly (or run a serial print test in Arduino IDE, though prefer ESP-IDF tests)
    - [X] Blinking on-board LED firmware runs expectedly (or run a serial print test in Arduino IDE, though prefer ESP-IDF tests)
    - [X] GPIO pins voltage-output levels are expected

<br/>



### End of Tests
<p align="right">(<a href="#component-list">back to components list</a>)</p>
<br/>


## Time-of-Flight Sensor: VL53L0X ToF Laser-Range Sensor Module
- [X] Physical Inspection
    - [X] No dents or damage
    - [X] No solder bridges
    - [X] If pins are soldered, no bent pins
    - [X] All pins match documented pins
    - [X] No unusual connections to pins and components on the board

<br/>

Proceed to the next tests only after the board passes the `Physical Inspection` test. Connect the board to the development machine without connecting GPIO1 and XSHUT yet. Power the board with its rated voltage input. Flash and run an I2C firmware test program to the board. 

- [ ] Sensor Output Ability
    - [ ] Data output from the sensor module is capabale

<br/>

- [ ] Sensor Data Accuracy
    - [ ] Data output is considerably accurate within its rated sensing ranges and intended environment

<br/>

Flash and run an I2C firmware test program that outputs the device address of the sensor module to the board. 

- [ ] Registry Firmware Configurability
    - [ ] Device address is `0x29` when default configuration is used
    - [ ] Device address is configurable to a different available address

<br/>



### End of Tests
<p align="right">(<a href="#component-list">back to components list</a>)</p>
<br/>


## Motor Driver: DRV8833 H-Bridge Motor Driver Breakout Module
- [ ] Physical Inspection
    - [ ] No dents or damage
    - [ ] No solder bridges
    - [ ] If pins are soldered, no bent pins
    - [ ] All pins match documented pins
    - [ ] No unusual connections to pins and components on the board

<br/>

Proceed to the next tests only after the board passes the `Physical Inspection` test. Connect the board to a power supply. The power supply must output a voltage within the driver module's rated voltage input. Set `nSLEEP` (or `EEP` for certain boards) high.

- [ ] Voltage Input Handling
    - [ ] Measured voltage input within the module is about the same as the power supply's output voltage (Measure VCC to GND on the module)

<br/>

- [ ] `nSLEEP` Pin Ability
    - [ ] Pulling `nSLEEP` high allows for `Voltage Input Handling` test to be replicated
    - [ ] Pulling `nSLEEP` low does not allow for `Voltage Input Handling` test to be replicated (no readings)

<br/>

Proceed to the next tests only after the board passes the `Voltage Input Handling` test. Before testing with a DC Motor, disconnect the power supply and set the power supply's output voltage to the DC Motor's rated voltage input. Connect a DC motor to the board alongside the power supply connected to the board. Don't stall or obstruct the DC Motor mechanically when testing.

- [ ] Motor Control
    - [ ] Channel A
        - [ ] Setting both IN1 and IN2 low sets DC Motor to coast / fast-decay
        - [ ] Setting IN1 low and IN2 high sets DC Motor to reverse
        - [ ] Setting IN1 high and IN2 low sets DC Motor to forward
        - [ ] setting both IN1 and IN2 high sets DC Motor to brake / slow-decay
    - [ ] Channel B
        - [ ] Setting both IN3 and IN4 low sets DC Motor to coast / fast-decay
        - [ ] Setting IN3 low and IN4 high sets DC Motor to reverse
        - [ ] Setting IN3 high and IN4 low sets DC Motor to forward
        - [ ] setting both IN3 and IN4 high sets DC Motor to brake / slow-decay

<br/>

Flash and run a test program on an MCU that iterates over the different motor control states, controlling the motor driver module. 

- [ ] MCU-controlled DC Motor Control
    - [ ] Channel A works expectedly
    - [ ] Channel B works expectedly

<br/>



### End of Tests
<p align="right">(<a href="#component-list">back to components list</a>)</p>
<br/>


## DC Motor: GA12-N20 1:100 RR DC Micro Motor
- [X] Physical Inspection
    - [X] No dents or damage
    - [X] Both terminals are intact
    - [X] Rotation of the output shaft or gearbox is possible by gently rotating it by hand
    - [X] No Excessive or uneven mechanical resistance

<br/>

- [X] Terminal Resistance
    - [X] Finite resistance reading from terminals of the component (not an open circuit or OL) <br/>
    <i>[place both probes of a Digital Multimeter to the component's terminals]</i>

<br/>
Apply the rated power for the component for the next tests. One terminal positive, the other GND.

- [ ] Expected Power-Applied Behavior, Case 1
    - [ ] The motor rotates
    - [ ] The rotation is smooth
    - [ ] No unusual grinding noises
    - [ ] The rotation is consistent
    - [ ] Not unusually hot

<br/>
Reverse the connections, the previously GND connected terminal now connects to positive, reverse the other the same way.

- [ ] Expected Power-Applied Behavior, Case 2
    - [ ] The motor rotates
    - [ ] The rotation is smooth
    - [ ] No unusual grinding noises
    - [ ] The rotation is consistent
    - [ ] Not unusually hot

<br/>

- [ ] Operating Current Behavior
    - [ ] Operating current is relatively low with no load
    - [ ] Operating current increases as load increases
    - [ ] Operating current reaches stall-current specification when stalled

<br/>

### End of Tests
<p align="right">(<a href="#component-list">back to components list</a>)</p>
<br/>


## Status LED: Through-Hole LED



## Status Buzzer: Active Piezo Buzzer