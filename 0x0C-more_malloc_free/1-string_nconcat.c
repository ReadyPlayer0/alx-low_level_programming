#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concatenates two strings up to n bytes.
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 * @n: number of bytes from s2 to concatenate
 *
 * Return: pointer to new concatenated string or NULL if it fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *new_str;
    unsigned int len_s1 = 0, len_s2 = 0, i;

    if (s1 == NULL)
        s1 = "";

    if (s2 == NULL)
        s2 = "";

    while (s1[len_s1] != '\0')
        len_s1++;
    while (s2[len_s2] != '\0')
        len_s2++;

    if (n >= len_s2)
        n = len_s2;

    new_str = malloc(sizeof(char) * (len_s1 + n + 1));
    if (new_str == NULL)
        return (NULL);

    for (i = 0; i < len_s1; i++)
        new_str[i] = s1[i];

    for (i = 0; i < n; i++)
        new_str[len_s1 + i] = s2[i];

    new_str[len_s1 + n] = '\0';

    return (new_str);
}
