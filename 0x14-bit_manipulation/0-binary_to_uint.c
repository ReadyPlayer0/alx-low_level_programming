#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Pointer to a string of 0 and 1 chars.
 *
 * Return: The converted number, or 0 if:
 *         - There is one or more chars in the string @b that is not 0 or 1.
 *         - @b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ui = 0;
	int len;

	if (!b)
		return 0;

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--; len >= 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
			return 0;

		ui <<= 1;
		if (b[len] == '1')
			ui |= 1;
	}

	return ui;
}
