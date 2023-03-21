#include <stdio.h>

/**
  * main - computes and prints the sum of all the multiples
  * of 3 or 5 below 1024
  * Return: Always 0 (Success)
  */
int main(void)
{
	unsigned long int num3, num5, sum; // declare 3 unsigned long int variables to hold num3, num5, and the sum
	int i; // declare an integer variable i to use in the for loop

	num3 = 0; // initialize num3 to 0
	num5 = 0; // initialize num5 to 0
	sum = 0; // initialize sum to 0

	for (i = 0; i < 1024; i++) // iterate through all numbers below 1024
	{
		if ((i % 3) == 0) // check if the current number is a multiple of 3
		{
			num3 = num3 + i; // add the current number to num3
		} else if ((i % 5) == 0) // check if the current number is a multiple of 5
		{
			num5 = num5 + i; // add the current number to num5
		}
	}
	sum = num3 + num5; // add num3 and num5 to obtain the sum of all multiples of 3 or 5 below 1024
	printf("%lu\n", sum); // print the sum
	return (0); // return 0 to indicate success
}
