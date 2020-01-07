//////////////////////////////////////////////////////////////////
//		  Salzburg University of Applied Sciences				//						
//		Information Technology & Systems Management				//							
//			    SWE1-ILV/B, exercise faculty					//
//////////////////////////////////////////////////////////////////
// file:			Pyramid.c									//
// date:			12.11.2019									//
//																//		
// time estimated:	15 min										//							
// time real:		15 min										//					
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

	int height = 0;
	int space = 0;
	int star = 0;

	printf("Höhe der Pyramide: ");
	scanf_s("%d", &height);

	star = 1;
	
	for (int i = 0; i < height; i++)
	{
		space = height - (i+1);
		for (int i = 0; i < space; i++)
		{
			printf(" ");
		}

		for (int i = 0; i < star; i++)
		{
			printf("*");
		}

		star += 2;

		printf("\n");
	}
}