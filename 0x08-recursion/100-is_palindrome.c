#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string to get the length of
 * Return: the length of the string
 */
int _strlen(char *s)
{
    if (*s == '\0')
        return (0);
    else
        return (1 + _strlen(s + 1));
}

/**
 * _check_palindrome - helper function to check if a string is a palindrome
 * @s: the string to check
 * @len: the length of the string
 * Return: 1 if it's a palindrome, 0 otherwise
 */
int _check_palindrome(char *s, int len)
{
    if (len <= 1)
        return (1);
    else if (*s != *(s + len - 1))
        return (0);
    else
        return (_check_palindrome(s + 1, len - 2));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to check
 * Return: 1 if it's a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
    int len;

    len = _strlen(s);
    return (_check_palindrome(s, len));
}
