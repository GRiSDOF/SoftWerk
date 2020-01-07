//////////////////////////////////////////////////////////////////
//		  Salzburg University of Applied Sciences				//						
//		Information Technology & Systems Management				//							
//			    SWE1-ILV/B, exercise faculty					//
//////////////////////////////////////////////////////////////////
// file:			UPNCalculator.c								//
// date:			26.11.2019									//
//																//		
// time estimated:	15 min										//							
// time real:		40 min										//					
//																//
// author:			Christoph Lenzbauer							//				
// email:			clenzbauer.its-b2019@fh-salzburg.ac.at		//									
//////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdbool.h>

#include "fifo.h"

void main()
{
	setlocale(LC_ALL, "de_DE");

	int ch;
	int first = 0;
	int second = 0;
	int result = 0;

	while ((ch = fgetc(stdin)) != EOF) 
	{

		switch (ch)
		{
			case '+': 
				first = pop();
				second = pop();
				result = first + second;

				printf("Ergebnis = %d", result);
			break;

			case '-':
				first = pop();
				second = pop();
				result = first - second;

				printf("Ergebnis = %d", result);
				break;

			case '*': 
				first = pop();
				second = pop();
				result = first * second;

				printf("Ergebnis = %d", result);
			break;

			case '/':
				first = pop();
				second = pop();
				result = first / second;

				printf("Ergebnis = %d", result);
				break;

			case '\n':
				break;

			default:
				push(ch - 48);
			break;
		}
	}
}
