#include "main.h"
#include <stdio.h>

/**
* main - Program to print its name and its argument
*
* Return: Always 0.
*/
void main(int argc, char *argv [])
{
	int i;
	for (i = 0;i < argc;i++)
	{
		printf("%s ", argv[i]);
	}
	printf("\n");
}
