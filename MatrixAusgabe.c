//////////////////////////////////////////////////////////////////
//		  Salzburg University of Applied Sciences				//						
//		Information Technology & Systems Management				//							
//			    SWE1-ILV/B, exercise faculty					//
//////////////////////////////////////////////////////////////////
// file:			MatrixAusgabe.c							//
// date:			12.11.2019									//
//																//		
// time estimated:	10 min										//							
// time real:		7 min										//					
//																//
// author:			Christoph Lenzbauer							//				
// email:			clenzbauer.its-b2019@fh-salzburg.ac.at		//									
//////////////////////////////////////////////////////////////////

#define sizex 3
#define sizey 3

#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include<string.h>

void main()
{
	setlocale(LC_ALL, "de_DE");
	
	int matrix[sizex][sizey];
	int temp = 0;

	for (int x = 0; x < sizex; x++)
	{
		for (int y = 0; y < sizey; y++)
		{
			printf("Zahlen für Matrix: \n");
			printf("[%d][%d]: ", x, y);
			fflush(stdin);
			scanf_s("%d", &temp);
			matrix[x][y] = temp;
			system("cls");
		}
	}

	for (int x = 0; x < sizex; x++)
	{
		printf("(\t");
		for (int y = 0; y < sizey; y++)
		{
			printf("%d,\t", matrix[x][y]);
		}
		printf(")\n");
	}
}