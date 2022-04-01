#include <stdio.h>

/**
* main - Program print its name, followed by a new line.
* @argc: number of coomand line arguements.
* @argv: array that contains the program command line arguements.
* Return: 0 - success
*/
int main(int argc _attribute_((unused), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
