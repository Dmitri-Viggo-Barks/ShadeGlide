# Rail Bot Electronic Component Validation Testing

## Equipment Needed
The following equipment are needed for testing:
- Digital Multimeter
- Power Supply Unit (Bench/etc.)
- Jumper Wires
- Breadboard (Optional, for circuit prototyping)
<br/>

---
<br/>


<div align=center>
<details>
  <summary>Component List</summary>
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


## Battery Cell: 18650 3.7V Protected Lithium-ion Cell
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
<br/>


## Logic Buck-Boost Converter: XL63020 w/ TI TPS63020 BBC Module



## Motor Buck-Boost Converter: B6284o Adjustable Output BBC Module



## Microcontroller Unit: ESP32-C3 Super Mini



## Time-of-Flight Sensor: VL53L0X ToF Laser-Range Sensor Module



## Motor Driver: DRV8833 H-Bridge Motor Driver Breakout Module



## DC Motor: GA12-N20 1:100 RR DC Micro Motor
- [X] Physical Inspection
    - [X] No dents or damage
    - [X] Both terminals are intact
    - [X] Rotation of the output shaft or gearbox is possible by gently rotating it by hand
    - [X] No Excessive or uneven mechanical resistance

<br/>

- [ ] Terminal Resistance
    - [ ] Finite resistance reading from terminals of the component (not an open circuit or OL) <br/>
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
<br/>


## Status LED: Through-Hole LED



## Status Buzzer: Active Piezo Buzzer