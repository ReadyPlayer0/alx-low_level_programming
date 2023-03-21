#include <stdio.h>

/**
  * main - Prints the first 50 Fibonacci numbers starting with 1 and 2,
  *        followed by a new line.
  *
  * Return: Always 0 (Success).
  */
int main(void)
{
	long int i, num1, num2, next;

	num1 = 1;
	num2 = 2;

	/* Loop through the first 50 Fibonacci numbers */
	for (i = 1; i <= 50; i++)
	{
		if (num1 != 20365011074)
		{
			printf("%ld, ", num1);
		} else
		{
			printf("%ld\n", num1);
		}

		/* Calculate the next Fibonacci number */
		next = num1 + num2;
		num1 = num2;
		num2 = next;
	}

	return (0);
}
