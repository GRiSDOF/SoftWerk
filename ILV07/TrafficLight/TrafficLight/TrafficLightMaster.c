#include <stdio.h>
#include <wiringPi.h>

#define RED 29
#define YELLOW 28
#define GREEN 27

#define MASTER 25

void GreenBlink();

int main(void)
{
	wiringPiSetup();

	pinMode(RED, OUTPUT);
	pinMode(YELLOW, OUTPUT);
	pinMode(GREEN, OUTPUT);
	pinMode(MASTER, OUTPUT);

	digitalWrite(RED, LOW);
	digitalWrite(YELLOW, LOW);
	digitalWrite(GREEN, LOW);

	digitalWrite(MASTER, LOW);
	delay(1000);

	while (1)
	{
		//RED
		digitalWrite(MASTER, HIGH);

		digitalWrite(RED, HIGH);
		delay(16000);

		digitalWrite(YELLOW, HIGH);
		delay(2000);
		digitalWrite(RED, LOW);
		digitalWrite(YELLOW, LOW);
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
