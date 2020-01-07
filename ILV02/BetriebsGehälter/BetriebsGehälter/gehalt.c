//////////////////////////////////////////////////////////////////
//		  Salzburg University of Applied Sciences				//						
//		Information Technology & Systems Management				//							
//		   SWE1-ILV/B, exercise betriebsgehälter				//
//////////////////////////////////////////////////////////////////
// file:			gehalt.c									//
// date:			08.10.2019									//
//																//		
// time estimated:	7 min										//							
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

	float gehalt = 0.0;

	printf("Geben sie ihr aktuelles Gehalt ein: ");
	fflush(stdin);
	scanf_s("%f", &gehalt);

	if (gehalt > 1000.00)
	{
		gehalt = gehalt + (gehalt * 0.085);
	}
	else 
	{
		gehalt = gehalt + (gehalt * 0.0209);
	}

	printf("\nIhr Gehalt wurde erhöht und Sie verdienen jetzt: %.2f", gehalt);

	return 0;
}