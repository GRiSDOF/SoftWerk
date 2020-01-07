//////////////////////////////////////////////////////////////////
//		  Salzburg University of Applied Sciences				//						
//		Information Technology & Systems Management				//							
//			    SWE1-ILV/B, exercise faculty					//
//////////////////////////////////////////////////////////////////
// file:			Stack.c										//
// date:			26.11.2019									//
//																//		
// time estimated:	15 min										//							
// time real:		20 min										//					
//																//
// author:			Christoph Lenzbauer							//				
// email:			clenzbauer.its-b2019@fh-salzburg.ac.at		//									
//////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h> 
#include <time.h> 
#include <stdbool.h>

#define size 20
int stack[size];
int stackPointer = 0;

void push(int x)
{
	if (stackPointer < size)
	{
		stack[stackPointer] = x;
		stackPointer++;
	}	
}

int pop(void)
{
	if (stackPointer > 0)
	{
		stackPointer--;
		return stack[stackPointer];
	}
	return -1;
}

int top(void)
{
	if (stackPointer > 0)
	{
		return stack[stackPointer - 1];
	}
	return stack[stackPointer];
}

bool empty(void)
{
	if (stackPointer == 0)
	{
		printf("Is Empty\n");
		return true;
	}
	printf("Is not Empty\n");
	return false;
}

int sizeOfStack(void)
{
	return size;
}

int lengthOfStack(void)
{
	return stackPointer;
}

void reset()
{
	while (stackPointer >= 0)
	{
		stack[stackPointer] = 0;
		stackPointer--;
	}
	stackPointer = 0;
	printf("Stack Reset\n");
}

void delete()
{
	printf("Stack deleted\n");
	//free(stack);
	//Wenn free verwendet werden soll => muss der Stack mit malloc erstellt werden
}

void pushFunc()
{
	int x = (rand() % 10 + 1);
	push(x);
	printf("Pushed: %d at %d\n", x, stackPointer - 1);
}

void main()
{
	setlocale(LC_ALL, "de_DE");
	srand(time(0));

	printf("Size of Stack: %d\n", sizeOfStack());
	printf("Length of Stack: %d\n", lengthOfStack());

	empty();
	
	pushFunc();
	pushFunc();
	pushFunc();
	pushFunc();
	pushFunc();

	empty();
	printf("Length of Stack: %d\n", lengthOfStack());

	printf("Top Element: %d\n", top());

	printf("Popped: %d\n", pop());
	printf("Popped: %d\n", pop());

	printf("Top Element: %d\n", top());

	reset();

	printf("Length of Stack: %d\n", lengthOfStack());
	printf("Popped: %d\n", pop());

	delete();
}