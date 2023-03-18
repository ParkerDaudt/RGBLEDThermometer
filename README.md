# RGB Temperature Display

This Arduino program reads temperature data from an analog sensor and displays the temperature using an RGB LED by flashing a specific color and count for tens and ones place of the temperature value in Fahrenheit.

## Hardware Components

- RGB LED
- Analog temperature sensor
- Arduino board

## Pin Configuration

- Red LED pin: 9
- Green LED pin: 10
- Blue LED pin: 11
- Sensor pin: 0

## How it works

1. The program initializes the pins for the RGB LED as output pins in the `setup()` function.
2. It defines a `setColor()` function that takes red, green, and blue values as arguments and sets the corresponding PWM values for the RGB LED.
3. In the `loop()` function, it reads the analog value from the temperature sensor, converts it to voltage, and then calculates the temperature in Celsius and Fahrenheit.
4. The program then divides the temperature value in Fahrenheit by 10 to obtain the tens and ones place values.
5. For the tens place value, it flashes the LED using the following color code:
   - Red: temperature between 80 and 110 degrees Fahrenheit
   - Green: temperature between 50 and 79 degrees Fahrenheit
   - Blue: temperature between 1 and 49 degrees Fahrenheit
6. For the ones place value, it flashes the LED using white color.
7. The LED flashes the color corresponding to tens place value followed by ones place value, each separated by an "off" state for 500 milliseconds.
8. After displaying the temperature, the program waits for two minutes before displaying the temperature again.

## Example Usage

1. Connect the RGB LED and the analog temperature sensor to the Arduino board using the specified pin configuration.
2. Upload the code to the Arduino board.
3. Observe the flashing pattern of the RGB LED to determine the temperature.

