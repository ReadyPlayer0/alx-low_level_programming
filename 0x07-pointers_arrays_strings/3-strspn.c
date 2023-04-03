#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: initial length
 *
 * Return: size of the substring
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *ptr;

	while (*s)
	{
		ptr = accept;

		while (*ptr)
		{
			if (*ptr == *s)
			{
				count++;
				break;
			}
			ptr++;
		}

		if (*ptr == '\0')
			return (count);

		s++;
	}

	return (count);
}
