#include <stdio.h>
#include <stdlib.h>

/**
 * main - Adds positive numbers
 * @argc: Number of arguments passed to the program
 * @argv: Array of arguments passed to the program
 *
 * Return: 0 if success, 1 if error
 */
int main(int argc, char **argv)
{
    int sum = 0, i, j;

    if (argc == 1)
    {
        printf("0\n");
        return (0);
    }

    for (i = 1; i < argc; i++)
    {
        for (j = 0; argv[i][j]; j++)
        {
            if (argv[i][j] < '0' || argv[i][j] > '9')
            {
                printf("Error\n");
                return (1);
            }
        }
        sum += atoi(argv[i]);
    }
    printf("%d\n", sum);
    return (0);
}
