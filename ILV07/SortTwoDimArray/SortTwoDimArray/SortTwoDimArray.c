#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#define MAX 3
#define RANGE 100


void setRandMat(int mat[MAX][MAX]);
void printMat(int mat[MAX][MAX]);
void sortMat(int mat[MAX][MAX]);
void oneDimToTwo(int mat[MAX][MAX], int MAT[MAX * MAX]);

int main()
{
	srand(time(NULL));
	int mat[MAX][MAX] = { 0 };

	setRandMat(mat);

	printf("Unsortierte Matrix:\n\n");
	printMat(mat);

	printf("\n\n\n");

	printf("Sortierte Matrix:\n\n");
	sortMat(mat);
	printMat(mat);

	return 0;
}


void setRandMat(int mat[MAX][MAX])
{
	int z = 0;
	int s = 0;

	for (z = 0; z < MAX; z++)
	{
		for (s = 0; s < MAX; s++)
		{
			mat[z][s] = (rand() % 100) + 1;
		}
	}
}

void printMat(int mat[MAX][MAX])
{
	int z = 0;
	int s = 0;

	for (z = 0; z < MAX; z++)
	{
		for (s = 0; s < MAX; s++)
		{
			printf("%d\t", mat[z][s]);
		}
		printf("\n");
	}
}

void sortMat(int mat[MAX][MAX])
{
	int index = 0;
	int help = 0;
	int newMat[MAX * MAX] = { 0 };

	bool swapped = true;

	for (int z = 0; z < MAX; z++)
	{
		for (int s = 0; s < MAX; s++, index++)
		{
			newMat[index] = mat[z][s];
		}
	}

	int counter = (MAX * MAX) - 1;

	while (swapped)
	{
		swapped = false;

		for(int i = 0; i < counter ; i++ )
		{
			if (newMat[i] > newMat[i + 1])
			{
				help = newMat[i];
				newMat[i] = newMat[i + 1];
				newMat[i + 1] = help;
				
				swapped = true;
			}
		}

		counter--;
	}

	oneDimToTwo(mat, newMat);
}

void oneDimToTwo(int mat[MAX][MAX], int MAT[MAX * MAX])
{
	int index = 0;

	for (int z = 0; z < MAX; z++)
	{
		for (int s = 0; s < MAX; s++, index++)
		{
			mat[z][s] = MAT[index];
		}
	}
}
