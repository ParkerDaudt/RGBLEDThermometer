#include <cmath>

int redPin = 9;
int greenPin = 10;
int bluePin = 11;
int sensorPin = 0;


void setup() 
{
    
    pinMode(redPin, OUTPUT);
    pinMode(greenPin, OUTPUT);
    pinMode(bluePin, OUTPUT);
}

void setColor(int red, int green, int blue)
{
    
    analogWrite(redPin, red);
    analogWrite(greenPin, green);
    analogWrite(bluePin, blue);
}

void loop()
{

float voltage = analogRead(sensorPin) * .004882814;
    int temperatureC = (voltage - 0.5) * 100;
    int temperatureF = (temperatureC * 9.0 / 5.0) + 32.0;

int tempcount = temperatureF / 10;
int temp10s = temperatureF / 10;
int temp1s = fmod(temperatureF , 10);
int counter = 0;
int counter2 = 0;
{

while(temp10s <= 11 && temp10s >= 8 && counter < temp10s)
{
	setColor(255,0,0);// red
	delay(500);
	setColor(0,0,0); // off
	delay(500);
	counter++;
}

while(temp10s < 8 && temp10s >= 5 && counter < temp10s)
{
	setColor(0,255,0); // green
	delay(500);
	setColor(0,0,0); // off
	delay(500);
	counter++;
}

while(temp10s <5 && temp10s > 0 && counter < temp10s)
{
	setColor(0,0,255); // blue
	delay(500);
	setColor(0,0,0); // off
	delay(500);
	counter++;
}

while(temp1s >= 0 && counter2 < temp1s)
{

	setColor(255,255,255); // white
	delay(500);
	setColor(0,0,0); // off
	delay(500);
	counter2++;
}

}
 delay(120000 - (500 * temp1s + temp10s)); // wait two minutes from start of one display to the start of the other
}

