#include <stdio.h>
#include "main.h"

/**
<<<<<<< HEAD
 ** print_to_98 - Check the code
 * @n: A input integer
 * Description: function that prints all natural numbers
 * from n to 98, followed by a new line.
 *
 *  Return: Nothing
 */

void print_to_98(int n)
{
if (n <= 98)
{
for (; n <= 98; n++)
{
printf("%d", n"); 
if (n == 98)
continue 
printf(", ");
}
printf("\n");
}
else
{
for (; n >= 98; n--;
		{															printf("%d", n);
if (n == 98)
continue;
printf(", ");
}
printf("\n");
}
=======
 * print_to_98 - Check Holberton
 * @n: A input integer
 * Description: function that prints all natural numbers
 * from n to 98, followed by a new line.
 * Return: Nothing
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);

			if (n == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);

			if (n == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
>>>>>>> ee6f8ae940c7ce9ab2a85d65ff4733a8c3895ee5
}
