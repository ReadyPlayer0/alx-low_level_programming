#include <stdio.h>

/**
 * main - Entry point. Finds and prints the sum of even-valued terms in a sequence
 * where each term is the sum of the two preceding terms, starting with 1 and 2.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
    int i;
    unsigned long int num1, num2, next, sum;

    num1 = 1;
    num2 = 2;
    sum = 0;

    for (i = 1; i <= 33; i++)
    {
        if (num1 < 4000000 && (num1 % 2) == 0)
        {
            sum = sum + num1;
        }

        next = num1 + num2;
        num1 = num2;
        num2 = next;
    }

    printf("%lu\n", sum);

    return (0);
}
