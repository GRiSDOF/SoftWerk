#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdbool.h>


#pragma warning(disable:4996)

void cat(char* fileName);
void copy(char* source, char* destination);

void main()
{
	char* fileName = "log.txt";

	char* source = "G:/temp";
	char* destination = "G:/temp/aa";
	
	cat(fileName);
	copy(source, destination);
}

void cat(char* fileName)
{
	FILE* file = NULL;

	file = fopen("log.txt", "r");

	if (file == NULL) {
		printf("Fehler beim Lesen der Datei");
	}
	else {
		
		char c = '_';
		while (!(feof(file))) 
		{
			c = fgetc(file);

			printf("%c", c);
		}
	}
}

void copy(char* source, char* destination)
{
	size_t len = 0;

	char buffer[BUFSIZ] = { '\0' };
	
	FILE* src = fopen(source, "rb");
	FILE* dst = fopen(destination, "wb");
	
	if (src == NULL || dst == NULL)
	{
		printf("Error");
	}
	else
	{
		while ((len = fread(buffer, BUFSIZ, 1, src)) > 0)
		{
			fwrite(buffer, BUFSIZ, 1, dst);
		}

		fclose(src);
		fclose(dst);
	}
}