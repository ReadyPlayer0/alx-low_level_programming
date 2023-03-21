#include <stdio.h>
#define LARGEST 10000000000

/**
 * main - Entry point. Finds and prints the first 98 Fibonacci numbers.
 *
 * Description: Starting with 1 and 2, each Fibonacci number is the sum of the two
 * preceding ones. The program prints these numbers, separated by commas and spaces.
 * If the number exceeds the maximum unsigned long int value, the program prints
 * the number as two parts separated by a comma and space, with the first part
 * representing the most significant digits and the second part the least significant
 * digits.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	unsigned long int fr1 = 0, bk1 = 1, fr2 = 0, bk2 = 2;
	unsigned long int hold1, hold2, hold3;
	int count;

	printf("%lu, %lu, ", bk1, bk2);
	for (count = 2; count < 98; count++)
	{
		if (bk1 + bk2 > LARGEST || fr2 > 0 || fr1 > 0)
		{
			hold1 = (bk1 + bk2) / LARGEST;
			hold2 = (bk1 + bk2) % LARGEST;
			hold3 = fr1 + fr2 + hold1;
			fr1 = fr2, fr2 = hold3;
			bk1 = bk2, bk2 = hold2;
			printf("%lu%010lu", fr2, bk2);
		}
		else
		{
			hold2 = bk1 + bk2;
			bk1 = bk2, bk2 = hold2;
			printf("%lu", bk2);
		}
		if (count != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}

