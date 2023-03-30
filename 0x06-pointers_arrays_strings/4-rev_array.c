#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: Integer array
 * @n: Size of the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int *begin, *end;
	int tmp;
	int e;
	int f;

	begin = a;
	end = a;
	for (i = 0; i < n - 1; i++)
		end++;

	e = 0;
	f = n - 1;
	while (e < f)
	{
		tmp = *end;
		*end = *begin;
		*begin = tmp;
		begin++;
		end--;

		e++;
		f--;
	}
}
