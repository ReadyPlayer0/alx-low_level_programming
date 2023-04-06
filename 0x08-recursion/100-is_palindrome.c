#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: pointer to the string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */

#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to check
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
    if (*s == '\0')
        return (1);

    char *end = s;
    while (*(end + 1) != '\0')
        end++;

    if (*s != *end)
        return (0);

    *end = '\0';
    return (is_palindrome(s + 1));
}
