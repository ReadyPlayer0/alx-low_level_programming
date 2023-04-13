#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two positive numbers
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
    int i, j, len1, len2, carry, n1, n2, res;
    int *result;

    if (argc != 3)
    {
        printf("Error\n");
        return (98);
    }

    for (i = 0; argv[1][i] != '\0'; i++)
    {
        if (argv[1][i] < '0' || argv[1][i] > '9')
        {
            printf("Error\n");
            return (98);
        }
    }
    for (j = 0; argv[2][j] != '\0'; j++)
    {
        if (argv[2][j] < '0' || argv[2][j] > '9')
        {
            printf("Error\n");
            return (98);
        }
    }

    len1 = i, len2 = j;
    result = calloc(len1 + len2, sizeof(int));

    if (result == NULL)
        return (98);

    for (i = len1 - 1; i >= 0; i--)
    {
        carry = 0;
        n1 = argv[1][i] - '0';

        for (j = len2 - 1; j >= 0; j--)
        {
            n2 = argv[2][j] - '0';
            res = n1 * n2 + result[i + j + 1] + carry;
            carry = res / 10;
            result[i + j + 1] = res % 10;
        }
        result[i + j + 1] += carry;
    }

    for (i = 0; i < len1 + len2; i++)
    {
        if (result[i] != 0 || i == len1 + len2 - 1)
            break;
    }

    for (; i < len1 + len2; i++)
        printf("%d", result[i]);
    printf("\n");

    free(result);
    return (0);
}
