#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

//#include <wiringPi.h>

#define ledPin 21
#define dit 100;
#define dah 300;
#pragma warning(disable:4996)

static const char* space[2] = { "*", "*******" };

static const char* alpha[30] = {
	".-",   //A
	"-...", //B
	"-.-.", //C
	"-..",  //D
	".",    //E
	"..-.", //F
	"--.",  //G
	"....", //H
	"..",   //I
	".---", //J
	"-.-",  //K
	".-..", //L
	"--",   //M
	"-.",   //N
	"---",  //O
	".--.", //P
	"--.-", //Q
	".-.",  //R
	"...",  //S
	"-",    //T
	"..-",  //U
	"...-", //V
	".--",  //W
	"-..-", //X
	"-.--", //Y
	"--..", //Z
};
static const char* num[10] = {
	"-----", //0
	".----", //1
	"..---", //2
	"...--", //3
	"....-", //4
	".....", //5
	"-....", //6
	"--...", //7
	"---..", //8
	"----.", //9
};


void main() 
{
	char toMorse[200];
	char morsingCode[500] = "";
	static const char nullByte[1] = "0";
	char ch;
	int c = 0;
	int index = 0;

	//wiringPiSetup();
	//pinMode(ledPin, OUTPUT);

	printf("to morse: ");
	
	fgets(toMorse, 200, stdin);

	while (true)
	{
		ch = toMorse[index++];
		c = ch;
		
		if (ch == '\n')
		{
			break;
		}

		if (c >= 48 && c <= 57) //number
		{
			c = c - 48;
			strcat(morsingCode, num[c]);
			strcat(morsingCode, space[0]);
		}
		else if (c >= 65 && c <= 90) //character
		{
			c = c - 65;
			strcat(morsingCode, alpha[c]);
			strcat(morsingCode, space[0]);
		}
		else if (c == 32) //space 
		{
			strcat(morsingCode, space[1]);
		}
	}

	strcat(morsingCode, nullByte);
	
	puts(morsingCode);
	index = 0;

	while (true)
	{
		if (morsingCode[index] == '0')
		{
			break;
		}
		else if(morsingCode[index] == '.')
		{
			printf("kurz ");
			//delay(dit);
		}
		else if (morsingCode[index] == '-')
		{
			printf("lang ");
			//delay(dah);
		}
		else if (morsingCode[index] == '*')
		{
			printf("pause ");
			//delay(dah);
		}

		index++;
	}
}
