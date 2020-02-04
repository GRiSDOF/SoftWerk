#include <stdio.h>
#include <wiringPi.h>

#define RED 29
#define YELLOW 28
#define GREEN 27

#define SLAVE 25

void GreenBlink();

int main(void)
{
	wiringPiSetup();

	pinMode(RED, OUTPUT);
	pinMode(YELLOW, OUTPUT);
	pinMode(GREEN, OUTPUT);
	pinMode(SLAVE, INPUT);

	digitalWrite(RED, LOW);
	digitalWrite(YELLOW, LOW);
	digitalWrite(GREEN, LOW);


	while (1)
	{
		if (digitalRead(SLAVE) == 1)
		{
			delay(2500);
			break;
		}
	}

	while (1)
	{


		digitalWrite(GREEN, HIGH);
		delay(7000);

		GreenBlink();
		GreenBlink();
		GreenBlink();
		GreenBlink();

		digitalWrite(GREEN, LOW);
		digitalWrite(YELLOW, HIGH);
		delay(2000);
		digitalWrite(YELLOW, LOW);


		digitalWrite(RED, HIGH);
		delay(16000);

		digitalWrite(YELLOW, HIGH);
		delay(2000);
		digitalWrite(RED, LOW);
		digitalWrite(YELLOW, LOW);
		//delay(10);
	}

	return -1;
}

void GreenBlink()
{
	digitalWrite(GREEN, LOW);
	delay(500);
	digitalWrite(GREEN, HIGH);
	delay(500);
}