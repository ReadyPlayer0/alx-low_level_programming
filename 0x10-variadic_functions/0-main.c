#include <stdio.h>
#include "variadic_functions.h"

/**
 * main - Entry point of the program
 *
 * Description: This function demonstrates the usage of the variadic function
 *              sum_them_all() by calling it with different sets of arguments
 *              and printing the result.
 *
 * Return: Always 0 (indicating success)
 */
int main(void)
{
    int sum;

    sum = sum_them_all(2, 98, 1024);
    printf("Sum: %d\n", sum);

    sum = sum_them_all(4, 98, 1024, 402, -1024);
    printf("Sum: %d\n", sum);

    return 0;
}
