#include "main.h"

/**
 * rot13 - Encodes a string using rot13
 * @str: Pointer to a string to be encoded
 *
 * Return: The encoded string
 */
char *rot13(char *str)
{
	int i, j;
	char *s1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *s2 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	/* iterate over each character in the string */
	for (i = 0; str[i] != '\0'; i++)
	{
		/* iterate over each character in the substitution strings */
		for (j = 0; s1[j] != '\0'; j++)
		{
			/* if the current character matches a character in the first string, substitute it */
			if (str[i] == s1[j])
			{
				str[i] = s2[j];
				break;
			}
		}
	}

	return (str);
}
