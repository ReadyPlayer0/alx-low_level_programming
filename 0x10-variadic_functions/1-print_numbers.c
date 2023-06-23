#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers - Prints numbers followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 *
 * Description: This function takes a variable number of integer arguments and
 *              prints them followed by a new line. The separator string is
 *              printed between each number. If the separator is NULL, an empty
 *              string is used as the separator.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
    va_list valist;
    unsigned int i;
    int num;

    if (separator == NULL)
        separator = "";

    va_start(valist, n);

    if (n > 0)
    {
        printf("%d", va_arg(valist, int));

        for (i = 1; i < n; i++)
        {
            num = va_arg(valist, int);
            printf("%s%d", separator, num);
        }
    }

    printf("\n");

    va_end(valist);
}
