//////////////////////////////////////////////////////////////////
//		  Salzburg University of Applied Sciences				//						
//		Information Technology & Systems Management				//							
//			    SWE1-ILV/B, exercise faculty					//
//////////////////////////////////////////////////////////////////
// file:			zahlSwap.c									//
// date:			29.10.2019									//
//																//		
// time estimated:	25 min										//							
// time real:		35 min										//					
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

	int zahl = 0;
	int help = 0;
	int help2 = 0;
	char bin[100000];
	char binHelp[100000];
	char c = 'c';

	int i = 0;

	int i_roman[] = { 1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1 };
	char* s_roman[] = { "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I" };

	printf("Zahl: ");
	scanf_s("%d", &zahl);


	//Hexadezimal
	printf("\nHex: %x", zahl);


	//Oktal
	printf("\nOct: %o", zahl);
	

	//Binär
	printf("\nBinär: ");
	help = zahl;
	help2 = zahl;
	while (help2 >= 1)
	{
		help = help2 % 2;
		help2 = help2 / 2;

		if (help == 1)
		{
			bin[i] = '1';
		}
		else 
		{
			bin[i] = '0';
		}

		i++;
	}
	bin[i] = '\0';

	for (int x = i-1, z = 0; x >= 0 ; x--, z++)
	{
		binHelp[z] = bin[x];
	}

	binHelp[i] = '\0';
	puts(binHelp);
	

	//Roman
	i = 0;
	printf("\nRömisch: ");
	
	while(zahl > 0)
	{
		if (zahl >= i_roman[i])
		{
			printf("%s ", s_roman[i]);
			zahl -= i_roman[i];
		}
		else
		{
			i++;
		}
	}
}