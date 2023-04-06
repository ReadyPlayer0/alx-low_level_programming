#include "main.h"
#include <stddef.h>

/**
 * do_sqrt_recursion - helper function to recursively calculate the natural
 * square root of a number.
 * @n: the number to find the root of.
 * @r: the root iterator.
 *
 * Return: the natural square root of n, or -1 if not found.
 */
int do_sqrt_recursion(int n, int r)
{
	if (r * r == n)
		return (r);
	else if (r * r > n)
		return (-1);
	return (do_sqrt_recursion(n, r + 1));
}

/**
 * _sqrt_recursion - calculates the natural square root of a number.
 * @n: the number to find the root of.
 *
 * Return: the natural square root of n, or -1 if not found.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (do_sqrt_recursion(n, 0));
}
