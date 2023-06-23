#include "variadic_functions.h"

/**
 * sum_them_all - Sums variable arguments
 * @n: The number of arguments
 * @...: The integers to sum
 *
 * Description: This function takes a variable number of arguments and returns
 *              their sum. It uses the va_start, va_arg, and va_end macros
 *              from the `<stdarg.h>` header to iterate over the arguments and
 *              calculate the sum.
 *
 * Return: The sum of the integers
 */
int sum_them_all(const unsigned int n, ...)
{
    int sum = 0;
    unsigned int i;
    va_list args;

    if (n == 0)
        return 0;

    va_start(args, n);

    for (i = 0; i < n; i++)
        sum += va_arg(args, int);

    va_end(args);

    return sum;
}
