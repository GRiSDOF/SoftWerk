//////////////////////////////////////////////////////////////////
//		  Salzburg University of Applied Sciences				//						
//		Information Technology & Systems Management				//							
//			    SWE1-ILV/B, exercise bmi						//
//////////////////////////////////////////////////////////////////
// file:			gtof.c										//
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

	float grad = 0.0;
	float fahrenheit = 0.0;

	printf("Temperatur in °C: ");
	fflush(stdin);
	scanf_s("%f", &grad);

	fahrenheit = (grad * 1.8) + 32;

	printf("%.2f°C sind umgerechnet %.2f°F", grad, fahrenheit);

	return 0;
}
