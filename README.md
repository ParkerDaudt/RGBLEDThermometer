# RGBLEDThermometer
A(n) C++/Arduino program that displays the current temperature through an RGB LED
I created this thermometer to be used in my college dorm room. As I had an air conditioner/heater that relied simply on a dial similar to that in cars (a red/blue wedge symbolizing more or less hot/cold) I wanted something more precise and reliable. I decided to make a thermometer that would visually show me the current temperature in the room. It uses a RGB LED to flash the current temperature read from a TMP36 sensor. The LED first flashes the Tens value of the temperature (ie 8 flashes for the 8 in the temperature 86) followed by flashing the Ones values (ie 6 flashes for the 6 in the temperature 86). The temperature is then read two minutes later. The amount of time between the flashes can be changed in the code to accommodate for individual desire. I used two minutes during initial testing but during actual use I found anywhere from 30 minutes or 1 hour was more useful. Also hitting the reset button on the Arduino would allow you to check the temperature at any time.
This project does not require an insane amount of parts to be constructed.

I used:

1x Arduino Uno R3 micro controller

1x RGB LED

1x TMP36 Analog Temperature Sensor

3x 220 Ohm Resistors

7x Male to Male Connector Wires

The reason I decided to use connector wires was my desire to reuse any of the parts in another project.

The wiring is fairly straightforward and unless you'd like to permanently have this on a PCB board, requires no soldering skills. I have included a wiring diagram I created for this project. Three wires lead from the temperature sensor to the Arudino. One connects the temperature sensor to the analog input on the board A0, one to the 5v, and one to GND. Another three wires connect the RGB LED to the Arduino as well. The Red lead off the RBG is connected to the Digital 9 (PWM), the Green lead is connected to the Digital 10 (PWM) and the Blue lead is connected to Digital 11 (PWM) and the Ground lead is connected to GND. Pulse Width Modulation is required to control the brightness of the LED. All three color leads are connected to the board through a 220 Ohm resistor for each lead. This prevents any excess power flowing to the LED that may cause it to be damaged.

Step 3: Upload the .ino File

After all of the components are connected to the Arduino download and flash the RGBThermometer.ino. If all of the components are connected properly you should see the LED flash a different combination of colors. There are four possible colors that could flash. An example of what you might see is as follows:

If the temperature is 87 degrees F:

LED flashes Red 8 times

LED flashes White 7 times.

The first set of flashes will either be Red, Green or Blue to represent the Tens place of the temperature depending on the range of temperature.

If the temperature is between 119 and 80 degrees the LED will flash Red.

If the temperature is between 79 and 50 degrees the LED will flash Green.

And if the temperature is between 49 and 10 degrees the LED will flash Blue.

After the first set of flashes is complete the LED will then flash White to represent the Ones place of the temperature.

The LED is programmed to wait two minutes between the start of each temperature display. The program takes into account the independent amount of flashes each time the program is run so that it will always be two minutes regardless.

Now that you have uploaded the sketch to your Arduino you have a fully functional RGB LED Thermometer. In the future I plan to add 12 more RGB LEDs to create a simple array to show a full digital display of the number rather than relying on counting the amount of flashes. The uses for this thermostat range anywhere from a simple room thermometer, or the code could be changed to provide an alert if the temperature reaches above a certain level.

Hopefully you enjoyed reading this and were able to follow along.

If you liked this instructable please share with anyone else you think would enjoy it as well as following me to keep up to date on any of my other uploads.

Feel free to contact me with any questions or comments at daudt.parker@gmail.com or through facebook.com/parker.daudt
