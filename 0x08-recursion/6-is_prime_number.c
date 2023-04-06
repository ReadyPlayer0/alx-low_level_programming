#include "main.h"

/**
 * is_prime_recursive - checks if a number is prime recursively.
 * @n: the number to check for primality
 * @divisor: the divisor to check if it divides n
 *
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime_recursive(unsigned int n, unsigned int divisor)
{
	if (n % divisor == 0)
	{
		if (n == divisor)
			return (1);
		else
			return (0);
	}
	return (is_prime_recursive(n, divisor + 1));
}

/**
 * is_prime_number - checks if a number is prime.
 * @n: the number to check for primality
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_recursive(n, 2));
}
