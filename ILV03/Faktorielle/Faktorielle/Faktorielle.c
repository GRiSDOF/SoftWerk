//////////////////////////////////////////////////////////////////
//		  Salzburg University of Applied Sciences				//						
//		Information Technology & Systems Management				//							
//			    SWE1-ILV/B, exercise faculty					//
//////////////////////////////////////////////////////////////////
// file:			Faktorielle.c								//
// date:			22.10.2019									//
//																//		
// time estimated:	3 min										//							
// time real:		1 min										//					
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

	int z = 0;
	int fak = 1;

	printf("Zahl: ");
	scanf_s("%d", &z);

	for (int i = z; i > 0; i--)
	{
		fak = fak * i;
	}

	printf("Fakultät von %d = %d", z, fak);
}