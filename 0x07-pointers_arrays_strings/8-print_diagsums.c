#include "main.h"

/**
 * print_diagsums - Prints the two diagonals of square matrix
 * @a: Pointer
 * @size: Size of the matrix
 *
 * Return: Always Void
 */
void print_diagsums(int *a, int size)
{
    int sum1 = 0, sum2 = 0;
    int i, j;

    for (i = 0; i < size; i++)
    {
        sum1 += *(a + i * size + i);  // add elements of first diagonal
        sum2 += *(a + i * size + size - 1 - i);  // add elements of second diagonal
    }

    printf("%d, %d\n", sum1, sum2);
}
