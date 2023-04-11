#include <stdio.h>

/**
 * main - Entry point. Prints all arguments it receives.
 * @argc: The number of arguments passed.
 * @argv: An array containing the arguments.
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
    int i;

    for (i = 0; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }

    return (0);
}
