//////////////////////////////////////////////////////////////////
//		  Salzburg University of Applied Sciences				//						
//		Information Technology & Systems Management				//							
//			    SWE1-ILV/B, exercise quersumme					//
//////////////////////////////////////////////////////////////////
// file:			Quersumme.c									//
// date:			22.10.2019									//
//																//		
// time estimated:	7 min										//							
// time real:		13 min										//					
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

	char z[20];
	int qs = 0;
	int i = 0;

	printf("Zahl: ");
	gets(z);

	while (z[i] != '\0')
	{
		qs += (z[i] - '0');
		i++;
	}

	printf("Quersumme: %d", qs);
}