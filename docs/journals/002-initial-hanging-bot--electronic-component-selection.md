# Initial Hanging Bot Electronic Components
## Selection Rationale
Due to the project's main financial contributor (mainly [@Dmitri-Viggo-Barks](https://github.com/Dmitri-Viggo-Barks)) being a student on a tight budget and having limited time for working on the project from doing academics, the project's version 1 output will be constructed with breakout modules and boards interconnected instead of a dedicated custom PCB.

Component models are also chosen heavily based on local convenience rather than solely for the best component efficacy. It should also be known that the chosen electronic components would have the smallest available size and weight as to not add resistive force to the bot's movement.

Still, the factors of local-availability, cost, performance, and mechanical characteristics are considered carefully for the output's best outcome given the constraints. 

## Determined Electronic Components
1. <strong>Microcontroller Unit (MCU)</strong><br/>
The MCU would need to be able to have wireless communication functionality with another MCU whilst consuming little power from its power source. It must also have atleast 1 more of the Signal Pins for bot's sensors and actuators.
2. <strong>1 Wheel DC Motor Driver</strong><br/>
The driver should be able to feed the DC motor the adequate rated voltage and current to the DC motor easily, as well as the motor's stall current. It's signal input pins must also match the MCU's signal output pin voltage level output.
3. <strong>Ranging Sensor (amount: 2)</strong><br/>
The 2 ranging sensors must be able to detect obstructions infront by at least 0.5 meters. Several electronic components that create both audio and electrical noise is present in the environment, as well as different audible noises in different spectrums; the sensor must account for this. It's signal pins must also match the MCU's signal input pin voltage level input.
4. <strong>DC Motor</strong><br/>
The DC Motor should be able to operate with a torque strong enough to drag a 700 gram curtain with grommets horizontally along a metal rail along with the bot's body with an operating wheel with a diameter between 2-5 centimeters (wheel material yet to be determined).
5. <strong>Battery Power Source</strong><br/>
The battery must be at least a small amount higher than the rated operating voltage level of the component with the highest voltage rating. The same requirement for the discharge current rating of the battery. It should also be rechargeable and preferrably be protected or has adequate protection functionalities.
6. <strong>Buck & Boost Converter (BBC) (amount depends on electronic component voltage ratings)</strong><br/>
The electrical components would likely have different rated operating voltages and currents. Assuming they do, the BBCs should have rated input voltages fitting with the battery power source and output matching the rated operating voltages of the electronic component to be fed to as well as having a samll amount of surplus current output to give more than enough leeway for current surges.
7. <strong>Status LED</strong><br/>
The status LED just needs to be a small and simple LED that can be operated to flash when instructed to. It just needs to be directly connected to the MCU.
8. <strong>Battery Holder</strong><br/>
The battery holder just needs to be able to hold the battery power source. Physical polarity (positive and ground) outputs are preferrable for simplicity.

### Electronic Components Outside The Hanging Bot
1. Battery Charging Station<br/>
Since the battery power source is rechargeable, the battery's charging device should preferably be outside the bot to reduce weight and complexity.


## Selected Electronic Component Models
1. MCU: <strong>ESP32-C3 Super Mini</strong>
2. Motor Driver: <strong>DRV8833 Motor Driver Breakout Module</strong>
3. Ranging Sensor: <strong>VL53L0X Laser-Ranging Time-of-Flight Sensor</strong> (amount: 2)
4. DC Motor: <strong>GA12-N20 3V 1:100 RR 150 RPM DC Motor</strong>
5. Battery Power Source: <strong>18650 3.7V 2200mAh Rechargeable Protected Lithium-ion Battery</strong>
6. Buck & Boost Converters (BBCs):
    <br/>6.1 MCU & Ranging Sensor BBC: <strong>ECBuying S08 V5 3.3V Breakout Buck Boost Converter Module</strong>
    <br/>6.2 Motor Driver to DC Motor BBC: <strong>ECBuying Adjustable 5Pin Breakout Buck Boost Converter Module</strong>
7. Status LED: <strong>Simple Red LED Diode</strong>
8. Battery Holder: <strong>Plastic 18650 Lithium-ion Battery Holder with Positive & Negative Wires </strong>

## Acquiring of Electronic Components
Each electronic would be acquired by buying from online sellers through e-commerce platforms, particularly Shopee. However, if by any chance that an electronic component is readily available at a closer reach or is offered at a better deal, the electronic component would be acquired through that.

## Other Notes
Both the determined electronic components and the selected models have not been tested in working simulations, only by theory, hence this being "initial". Unfortunately, no electronic component is readily physically available to test in a real-world environment currently. Buying the parts solely for testing is also too costly. Further simulation testing and power architecture verification would instead be prioritized, this would be the next step in development.

---
Created: 18 October, 2026; 22:05  
Author: [@Dmitri-Viggo-Barks](https://github.com/Dmitri-Viggo-Barks)