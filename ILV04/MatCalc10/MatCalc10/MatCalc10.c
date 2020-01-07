//////////////////////////////////////////////////////////////////
//		  Salzburg University of Applied Sciences				//						
//		Information Technology & Systems Management				//							
//			    SWE1-ILV/B, exercise faculty					//
//////////////////////////////////////////////////////////////////
// file:			MatCalc10.c									//
// date:			12.11.2019									//
//																//		
// time estimated:	20 min										//							
// time real:		15 min										//					
//																//
// author:			Christoph Lenzbauer							//				
// email:			clenzbauer.its-b2019@fh-salzburg.ac.at		//									
//////////////////////////////////////////////////////////////////

#define xMat 3
#define yMat 3

#include <stdio.h>
#include <conio.h>
#include <locale.h>

void main()
{
	setlocale(LC_ALL, "de_DE");

	int aMatrix[yMat][xMat];
	int bMatrix[yMat][xMat];
	int sumMatrix[yMat][xMat];
	int productMatrix[yMat][xMat];

	int temp = 0;
	int i = 0;

	for (int y = 0; y < yMat; y++)
	{
		for (int x = 0; x < xMat; x++)
		{
			printf("Zahlen für Matrix A: \n");
			printf("[%d][%d]: ", y, x);
			fflush(stdin);
			scanf_s("%d", &temp);
			aMatrix[y][x] = temp;
			system("cls");
		}
	}


	for (int y = 0; y < yMat; y++)
	{
		for (int x = 0; x < xMat; x++)
		{
			printf("Zahlen für Matrix B: \n");
			printf("[%d][%d]: ", y, x);
			fflush(stdin);
			scanf_s("%d", &temp);
			bMatrix[y][x] = temp;
			system("cls");
		}
	}

	/////////////////////////////////////////////////

	printf("Matrix A: \n");
	for (int y = 0; y < yMat; y++)
	{
		for (int x = 0; x < xMat; x++)
		{
			printf("%d", aMatrix[y][x]);
			printf("\t");
		}

		printf("\n");
	}

	printf("Matrix B: \n");
	for (int y = 0; y < yMat; y++)
	{
		for (int x = 0; x < xMat; x++)
		{
			printf("%d", bMatrix[y][x]);
			printf("\t");
		}
		printf("\n");
	}

	////////////////////////////////////////////////////7

	//Addition:
	for (int y = 0; y < yMat; y++)
	{
		for (int x = 0; x < xMat; x++)
		{
			sumMatrix[y][x] = aMatrix[y][x] + bMatrix[y][x];
		}
	}

	printf("Matrix C (Summe): \n");
	for (int y = 0; y < yMat; y++)
	{
		for (int x = 0; x < xMat; x++)
		{
			printf("%d", sumMatrix[y][x]);
			printf("\t");
		}
		printf("\n");
	}

	temp = 0;

	//Multiplikation:
	for (int y = 0; y < yMat; y++) 
	{
		for (int x = 0; x < yMat; x++) 
		{
			for (int z = 0; z < yMat; z++) 
			{
				temp += aMatrix[y][z] * bMatrix[z][x];
			}

			productMatrix[x][y] = temp;
			temp = 0;
		}
	}



	printf("Matrix D (Produkt): \n");
	for (int y = 0; y < yMat; y++)
	{
		for (int x = 0; x < xMat; x++)
		{
			printf("%d", productMatrix[x][y]);
			printf("\t");
		}
		printf("\n");
	}

}