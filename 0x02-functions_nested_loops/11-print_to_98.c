#include <stdio.h>
#include "main.h"

/**
  * print_to_98 - prints all natural numbers from n to 98,
  *               followed by a new line
  * @n: the starting number
  *
  * Description: This function prints all the natural numbers from n to 98,
  *              followed by a new line. If n is greater than or equal to 98,
  *              it will print the numbers in descending order, otherwise it
  *              will print them in ascending order. The output is printed
  *              to the standard output using printf.
  *
  * Return: void
  */
void print_to_98(int n)
{
	int i, j;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
				printf("%d, ", i);
			else if (i == 98)
				printf("%d\n", i);
		}
	} else if (n >= 98)
	{
		for (j = n; j >= 98; j--)
		{
			if (j != 98)
				printf("%d, ", j);
			else if (j == 98)
				printf("%d\n", j);
		}
	}
}

