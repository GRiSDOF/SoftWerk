//////////////////////////////////////////////////////////////////
//		  Salzburg University of Applied Sciences				//						
//		Information Technology & Systems Management				//							
//			    SWE1-ILV/B, exercise bmi						//
//////////////////////////////////////////////////////////////////
// file:			bmi.c										//
// date:			08.10.2019									//
//																//		
// time estimated:	10 min										//							
// time real:		7 min										//					
//																//
// author:			Christoph Lenzbauer							//				
// email:			clenzbauer.its-b2019@fh-salzburg.ac.at		//									
//////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "de_DE");

	float weight = 0.0;
	float height = 0.0;
	float bmi = 0.0;
	char c = 'x';

	printf("Geschlecht? (m/w): ");
	fflush(stdin);
	c = getchar();

	printf("Gewicht (kg): ");
	fflush(stdin);
	scanf_s("%f", &weight);

	printf("Größe (cm): ");
	fflush(stdin);
	scanf_s("%f", &height);

	height = height / 100;

	if ((c != 'm' || c != 'w') && height < 0.25 && weight < 1)
	{
		printf("\nFehlerhafte Eingabe!");
		return 0;
	}
	else
	{
		bmi = weight / (height * height);
		printf("\nBMI: %.2f -- ", bmi);
		switch (c)
		{
		case 'm':
			if (bmi < 21)
			{
				printf("Untergewicht");
			}
			else if (bmi >= 21 && bmi < 26)
			{
				printf("Normalgewicht");
			}
			else if (bmi >= 26 && bmi < 31)
			{
				printf("Übergewicht");
			}
			else if (bmi >= 31 && bmi < 41)
			{
				printf("Adipositas");
			}
			else if (bmi > 41)
			{
				printf("Massive Adipositas");
			}

			printf("\n");
			break;

		case 'w':
			if (bmi < 20)
			{
				printf("Untergewicht");
			}
			else if (bmi >= 20 && bmi < 25)
			{
				printf("Normalgewicht");
			}
			else if (bmi >= 25 && bmi < 31)
			{
				printf("Übergewicht");
			}
			else if (bmi >= 31 && bmi < 41)
			{
				printf("Adipositas");
			}
			else if (bmi > 40)
			{
				printf("Massive Adipositas");
			}

			printf("\n");
			break;
		}


	}
}
