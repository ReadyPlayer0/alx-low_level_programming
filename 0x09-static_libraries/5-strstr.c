#include "main.h"

/**
 * _strstr - locates a substring.
 * @haystack: string
 * @needle: string to be located
 *
 * Return: char pointer if located, otherwise NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	char *start = haystack;
	char *substr = needle;

	while (*haystack != '\0')
	{
		start = haystack;
		substr = needle;

		while (*substr == *haystack && *substr != '\0' && *haystack != '\0')
		{
			substr++;
			haystack++;
		}

		if (*substr == '\0')
			return (start);

		haystack = start + 1;
	}

	return (0);
}
