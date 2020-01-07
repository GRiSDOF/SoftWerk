//////////////////////////////////////////////////////////////////
//		  Salzburg University of Applied Sciences				//						
//		Information Technology & Systems Management				//							
//			    SWE1-ILV/B, exercise faculty					//
//////////////////////////////////////////////////////////////////
// file:			ArithuMin.c									//
// date:			29.10.2019									//
//																//		
// time estimated:	3 min										//							
// time real:		4 min										//					
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

	int zahlen[10];
	int min = 99999999;
	float arith = 0;

	for (int i = 0; i < 10; i++)
	{
		printf("Zahl %d: ", i+1);
		scanf_s("%d", &zahlen[i]);
		if (zahlen[i] < min)
		{
			min = zahlen[i];
		}

		arith += zahlen[i];
	}

	arith = arith / 10;

	printf("Arithmetisches Mittel: %.2f\n", arith);
	printf("Kleinste Zahl: %d", min);
	
}