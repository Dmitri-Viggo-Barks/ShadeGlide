# Unit Test 1
used last codebase from `commit e684293`

## Simple single GPIO pin HIGH-LOW loop
A single chosen pin is set HIGH then LOW repeatedly in intervals of 1 second, with no pull resistor and an arbitrary current drive.

### Test Result: `Passed` <br/>

### Observations:
- The pin, when set low, output a voltage of around an average of 0.12V. (human measured times).
- The pin, when set high, output a voltage of around an average of 3.32V. (human measured times).
- The intervals of these HIGHs and LOWs were about consistent to 1 second. <br/>
<br/>
<br/>
<br/>
- The sorrounding pins were held at a voltage level of around 1.5V-1.69V


### Discussion
The chosen pin's behavior was expected and is considered passed. The rest of the pins posed a risk however. Researching online, this may be due to undefined impedance within the pins since they are unused. Perhaps an implementation of having them configured to not behave like this would be needed as these are likely to cause power issues. This will be added to `TODO.md`.
<br/><br/>
Nov 26, 2026
<br/><br/>
