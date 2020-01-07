#include <stdio.h>
#include <conio.h>


int main()
{
	int l = 0;
	int b = 0;
	int a = 0;
	int u = 0;

	printf("Rechteck-Flaechen-/Umfangsberechnung \n\n");

	printf("Laenge des Rechtecks (in cm): ");
	fflush(stdin);
	scanf_s("%d", &l);

	printf("Breite des Rechtecks (in cm): ");
	fflush(stdin);
	scanf_s("%d", &b);

	a = l * b;
	u = 2 * (l + b);
	printf("\n\n");
	printf("Die Flaeche des Rechtecks betraegt %d cm^2\n", a);
	printf("Der Umfang des Rechtecks betraegt %d cm", u);
	_getch();
}