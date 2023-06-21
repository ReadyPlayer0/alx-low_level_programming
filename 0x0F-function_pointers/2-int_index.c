#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array.
 * @array: Pointer to the int array.
 * @size: Size of the array.
 * @cmp: Pointer to the compare function.
 *
 * This function searches for an integer in the array by applying
 * the provided compare function to each element.
 *
 * @array: Pointer to the array of integers.
 * @size: Number of elements in the array.
 * @cmp: Pointer to the function with the signature `int (*cmp)(int)`,
 *       used to compare values.
 *
 * Return: The index of the first element for which the cmp function does not return 0,
 *         -1 if no element matches or if size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
    int i = 0;

    if (array && size && cmp)
    {
        while (i < size)
        {
            if (cmp(array[i]))
            {
                return i;
            }
            i++;
        }
    }

    return -1;
}
