#include "main.h"

/**
 * is_palindrome - Checks if a string is a palindrome
 *
 * @s: Pointer to the string to check
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
    int len = 0;

    if (*s == '\0')
        return (1);

    len = _strlen(s);
    return (_check_palindrome(s, len));
}

/**
 * _check_palindrome - Recursively checks if a string is a palindrome
 *
 * @s: Pointer to the string to check
 * @len: Length of the string
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */

int _check_palindrome(char *s, int len)
{
    if (len <= 1)
        return (1);

    if (*s != *(s + len - 1))
        return (0);

    return (_check_palindrome(s + 1, len - 2));
}

/**
 * _strlen - Calculates the length of a string recursively
 *
 * @s: Pointer to the string whose length to calculate
 *
 * Return: Length of the string
 */

int _strlen(char *s)
{
    if (*s == '\0')
        return (0);

    return (_strlen(s + 1) + 1);
}
