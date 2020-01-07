//////////////////////////////////////////////////////////////////
//		  Salzburg University of Applied Sciences				//						
//		Information Technology & Systems Management				//							
//			    SWE1-ILV/B, exercise faculty					//
//////////////////////////////////////////////////////////////////
// file:			Lebensdauer.c								//
// date:			16.11.2019									//
//																//		
// time estimated:	6 min										//							
// time real:		7 min										//					
//																//
// author:			Christoph Lenzbauer							//				
// email:			clenzbauer.its-b2019@fh-salzburg.ac.at		//									
//////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <conio.h>
#include <locale.h>

int x = 1; //Global x
int y = 1; //Global y

int function1(int x)
{
	static int y = 5;	//beim ersten durchlauf 5 => +1 .. danach 6
	y = y + x;			//+1 von param = y=7
	return y;
}

int function2(int x)
{
	y = y + x;	//global y = 1 + param(x=1) = 2 => +1 (param) .. danach 3
	x = y;		//param x = y (kein return = überflüssig)
	return y;
}

void main()
{
	setlocale(LC_ALL, "de_DE");

	int x = 1;
	int y = 1;

	printf("%d\n", function1(x)); //Voraussichtlich: 6
	printf("%d\n", function2(x)); //Voraussichtlich: 2
	printf("%d\n", function1(y)); //Voraussichtlich: 7
	printf("%d\n", function2(y)); //Voraussichtlich: 3
}