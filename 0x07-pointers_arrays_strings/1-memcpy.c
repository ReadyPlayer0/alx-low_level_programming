#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: pointer to destination memory
 * @src: pointer to source memory
 * @n: number of bytes to copy
 *
 * Return: pointer to destination memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
    char *d = dest;
    char *s = src;

    while (n--)
        *d++ = *s++;

    return dest;
}
