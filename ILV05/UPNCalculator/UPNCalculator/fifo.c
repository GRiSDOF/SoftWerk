#include <stdbool.h>

#define size 100
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
		return true;
	}
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
}

void _delete()
{
	free(stack);
}