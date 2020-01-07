//////////////////////////////////////////////////////////////////
//		  Salzburg University of Applied Sciences				//						
//		Information Technology & Systems Management				//							
//			    SWE1-ILV/B, exercise faculty					//
//////////////////////////////////////////////////////////////////
// file:			Faktorielle.c								//
// date:			10.11.2019									//
//																//		
// time estimated:	7 min										//							
// time real:		15 min										//					
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

	FILE* file;
	int ch;
	int i = 0;

	file = fopen("testfile.txt", "r");

	if ( file != NULL)
	{
		while ((ch = fgetc(file)) != EOF)
		{
			if (i < 10)
			{
				printf("00000%d  ", i);
			}
			else if (i < 100)
			{
				printf("0000%d  ", i);
			}
			else if (i < 1000)
			{
				printf("000%d  ", i);
			}
			else if (i < 10000)
			{
				printf("00%d  ", i);
			}
			else if (i < 100000)
			{
				printf("0%d  ", i);
			}
			else if (i < 1000000)
			{
				printf("%d  ", i);
			}
			
			fputc(ch, stdout);
			i++;
			printf("\n");
		}

		fclose(file);
	}
	else
	{
		printf("Failed to open File");
	}
}