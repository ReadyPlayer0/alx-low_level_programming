#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Prints strings with a separator.
 * @separator: The string separator.
 * @n: The number of string arguments.
 * @...: The strings to print.
 *
 * Description: This function takes a variable number of string arguments and
 *              prints them with a separator between each string. If the string
 *              is NULL, "(nil)" is printed instead. If the separator is NULL,
 *              no separator is used. After printing all the strings, a new line
 *              is printed.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	int i = n;
	char *str;
	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (i--)
		printf("%s%s", (str = va_arg(ap, char *)) ? str : "(nil)",
				i ? (separator ? separator : "") : "\n");
	va_end(ap);
}