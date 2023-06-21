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
    f(name);
}

/**
 * Function: print_name_default
 * ----------------------------
 * Default printing function for printing a name.
 *
 * name: Pointer to a string representing a name.
 *
 * returns: void
 */
void print_name_default(char *name)
{
    printf("Name: %s\n", name);
}

int main()
{

    char name[] = "John Doe";

    printf("Printing name using default function:\n");
    print_name(name, print_name_default);

    return 0;
}
