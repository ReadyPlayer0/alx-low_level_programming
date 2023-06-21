#include <stdio.h>

/**
 * Function: print_name
 * --------------------
 * Prints a name using a provided printing function.
 *
 * name: Pointer to a string representing a name.
 * f: Pointer to a function with the signature `void (*f)(char *)`,
 *    responsible for printing the name.
 *
 * returns: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}