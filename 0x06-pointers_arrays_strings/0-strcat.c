#include "main.h"
/**
 * _strcat - Concatenates two strings
 * @dest: Destination string
 * @src: Source string
 *
 * Return: Pointer to concatenated string
 */

char *_strcat(char *dest, char *src)
{
    char *ptr = dest;
    while (*ptr)
        ptr++;
    while (*src)
        *ptr++ = *src++;
    *ptr = '\0';
    return dest;
}
