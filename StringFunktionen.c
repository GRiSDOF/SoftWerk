//////////////////////////////////////////////////////////////////
//		  Salzburg University of Applied Sciences				//						
//		Information Technology & Systems Management				//							
//			    SWE1-ILV/B, exercise faculty					//
//////////////////////////////////////////////////////////////////
// file:			StringFunktionen.c							//
// date:			12.11.2019									//
//																//		
// time estimated:	15 min										//							
// time real:		20 min										//					
//																//
// author:			Christoph Lenzbauer							//				
// email:			clenzbauer.its-b2019@fh-salzburg.ac.at		//									
//////////////////////////////////////////////////////////////////

#define len 100

#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include<string.h>

void main()
{
	setlocale(LC_ALL, "de_DE");
	char string[len];
	char copied[len];
	char stringAppend[len];

	int length = 0;
	int ct = 0;

	printf("Zeichenkette: ");
	gets(string);

	for (int i = 0; i < len; i++)
	{
		if (string[i] == '\0')
		{
			break;
		}
		length++;
	}

	printf("Länge: %d", length);

	for (int i = 0; i < len; i++)
	{
		if (string[i] == '\0')
		{
			copied[i] = '\0';
			break;
		}
		copied[i] = string[i];
	}

	printf("\nKopiert: ");
	puts(copied);
	
	for (int i = length; i < len; i++)
	{
		string[i] = copied[ct];
		if (string[i] == '\0')
		{
			string[i] = '\0';
			break;
		}
		ct++;
	}

	printf("Angehängt: ");
	puts(string);
}