//////////////////////////////////////////////////////////////////
//		  Salzburg University of Applied Sciences				//						
//		Information Technology & Systems Management				//							
//		      SWE1-ILV/B, exercise maxtag						//
//////////////////////////////////////////////////////////////////
// file:			maxtag.c									//
// date:			08.10.2019									//
//																//		
// time estimated:	7 min										//							
// time real:		8 min										//					
//																//
// author:			Christoph Lenzbauer							//				
// email:			clenzbauer.its-b2019@fh-salzburg.ac.at		//									
//////////////////////////////////////////////////////////////////


#include <stdio.h>
#include <conio.h>

int main()
{
	int month = 0;
	int maxtag = 0;

	printf("Monat: ");
	fflush(stdin);
	scanf_s("%d", &month);

	switch (month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		maxtag = 31;
		break;

	case 2:
		maxtag = 29;
		break;

	case 4:
	case 6:
	case 9:
	case 11:
		maxtag = 30;
		break;

	default:
		maxtag = 0;
		printf("Fehlerhafte Eingabe!");
		break;
	}

	if (maxtag != 0)
	{
		printf("Der Monat hat im Jahr 2020 %d Tage.\n\n", maxtag);
	}

	return 0;
}
	

