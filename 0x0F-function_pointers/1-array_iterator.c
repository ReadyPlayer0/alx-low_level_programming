#include <stdio.h>

/**
 * array_iterator - Executes a function on each element of an array.
 * @array: Pointer to the array.
 * @size: Size of the array.
 * @action: Pointer to the function to be executed on each element.
 *
 * This function iterates over each element of the array and applies the
 * provided function to each element.
 *
 * @array: Pointer to the array of integers.
 * @size: Size of the array.
 * @action: Pointer to the function with the signature `void (*action)(int)`,
 *          to be executed on each element of the array.
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
    if (array && action)
    {
        for (size_t i = 0; i < size; i++)
        {
            action(array[i]);
        }
    }
}

/**
 * print_elem - prints an integer
 * @elem: the integer to print
 *
 * Return: void
 */
void print_elem(int elem)
{
    printf("%d\n", elem);
}

/**
 * print_elem_hex - prints an integer, in hexadecimal
 * @elem: the integer to print
 *
 * Return: void
 */
void print_elem_hex(int elem)
{
    printf("0x%x\n", elem);
}

int main(void)
{
    int array[5] = {0, 98, 402, 1024, 4096};

    printf("Printing array elements:\n");
    array_iterator(array, 5, &print_elem);

    printf("\nPrinting array elements in hexadecimal:\n");
    array_iterator(array, 5, &print_elem_hex);

    return 0;
}
