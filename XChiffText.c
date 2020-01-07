//////////////////////////////////////////////////////////////////
//		  Salzburg University of Applied Sciences				//						
//		Information Technology & Systems Management				//							
//			    SWE1-ILV/B, exercise faculty					//
//////////////////////////////////////////////////////////////////
// file:			XChiffText.c								//
// date:			10.11.2019									//
//																//		
// time estimated:	10 min										//							
// time real:		7 min										//					
//																//
// author:			Christoph Lenzbauer							//				
// email:			clenzbauer.its-b2019@fh-salzburg.ac.at		//									
//////////////////////////////////////////////////////////////////

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>
#include <locale.h>

void main()
{
	setlocale(LC_ALL, "de_DE");

	int code[] = { 1, 2, 3, 4, 5 };
	FILE* file;
	int ch;
	int i = 0;

	char text;
	
	file = fopen("testfile.txt", "r");

	if (file != NULL)
	{
		while ((ch = fgetc(file)) != EOF)
		{
			text = ch ^ code[i];
			fputc(text, stdout);
			if (i == 4)
			{
				i = 0;
			}
			else 
			{
				i++;
			}
		}
	}
	else
	{
		printf("Fehler beim Einlesen der Datei!");
	}
}