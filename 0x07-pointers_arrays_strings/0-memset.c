#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to the memory to be filled
 * @b: byte to fill the memory with
 * @n: number of bytes to fill
 *
 * Return: pointer to the filled memory area
 */
/**
 * _memset - fills memory with a constant byte
 * @s: pointer to memory area to be filled
 * @b: constant byte to fill with
 * @n: number of bytes to be filled
 *
 * Return: a pointer to the filled memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *ptr = s;

	for (i = 0; i < n; i++)
		*(ptr + i) = b;

	return (s);
}
