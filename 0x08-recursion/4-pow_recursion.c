#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y.
 *
 * @x: the base value to raise.
 *
 * @y: the power to raise the base value to.
 *
 * Return: the result of raising x to the power of y.
 *
 * If y is negative, the function returns -1.
 * If y is 0, the function returns 1.
 * Otherwise, the function recursively multiplies x by itself raised to the power of y-1.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
