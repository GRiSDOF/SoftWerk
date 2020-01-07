//////////////////////////////////////////////////////////////////
//		  Salzburg University of Applied Sciences				//						
//		Information Technology & Systems Management				//							
//		      SWE1-ILV/B, exercise maxtag						//
//////////////////////////////////////////////////////////////////
// file:			gQuadrant.c									//
// date:			14.10.2019									//
//																//		
// time estimated:	13 min										//							
// time real:		9 min										//					
//																//
// author:			Christoph Lenzbauer							//				
// email:			clenzbauer.its-b2019@fh-salzburg.ac.at		//									
//////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>

int main()
{
	int x = 0;
	int y = 0;

	printf("x-Koordinate: ");
	fflush(stdin);
	scanf_s("%d", &x);

	printf("y-Koordinate: ");
	fflush(stdin);
	scanf_s("%d", &y);

	if (x == 0 && y == 0)
	{
		printf("Der Punkt (%d,%d) ist der Ursprung", x, y);
	}
	if (x > 0)
	{
		if (y > 0)
		{
			printf("Der Punkt (%d,%d) liegt im 1. Quadranten", x, y);
		}
		else if (y < 0)
		{
			printf("Der Punkt (%d,%d) liegt im 4. Quadranten", x, y);
		}
		else if (y == 0)
		{
			printf("Der Punkt (%d,%d) liegt auf der positiven x-Achse", x, y);
		}
	}
	else if(x < 0)
	{
		if (y > 0)
		{
			printf("Der Punkt (%d,%d) liegt im 2. Quadranten", x, y);
		}
		else if (y < 0)
		{
			printf("Der Punkt (%d,%d) liegt im 3. Quadranten", x, y);
		}
		else if (y == 0)
		{
			printf("Der Punkt (%d,%d) liegt auf der negativen x-Achse", x, y);
		}
	}
	else if (x == 0)
	{
		if (y > 0)
		{
			printf("Der Punkt (%d,%d) liegt auf der positiven y-Achse", x, y);
		}
		else if (y < 0)
		{
			printf("Der Punkt (%d,%d) liegt auf der negativen y-Achse", x, y);
		}
	}
	return;
}