#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to the memory to be filled
 * @b: byte to fill the memory with
 * @n: number of bytes to fill
 *
 * Return: pointer to the filled memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
    char *ptr;

    ptr = s;
    while (n > 0)
    {
        *ptr = b;
        ptr++;
        n--;
    }

    return (s);
}
