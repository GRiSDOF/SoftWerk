//////////////////////////////////////////////////////////////////
//		  Salzburg University of Applied Sciences				//						
//		Information Technology & Systems Management				//							
//			    SWE1-ILV/B, exercise faculty					//
//////////////////////////////////////////////////////////////////
// file:			ArithMax.c									//
// date:			12.11.2019									//
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

void main()
{
	setlocale(LC_ALL, "de_DE");

	float numbers[10];
	float middle = 0;
	int x = 0;

	for (int i = 0; i < 10; i++)
	{
		printf("%i Zahl: ", i+1);
		scanf_s("%f", &numbers[i]);
		middle += numbers[i];
		printf("\n");
	}

	middle = middle / 10;
	printf("%.2f", middle);
	printf("\n");

	for (int i = 0; i < 10; i++)
	{
		if (numbers[i] > middle)
		{
			x++;
		}
	}
	printf("%d", x);


}