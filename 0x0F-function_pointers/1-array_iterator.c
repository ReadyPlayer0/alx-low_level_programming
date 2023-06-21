#include "function_pointers.h"

/**
 * array_iterator - maps an array through a function pointer
 * @array: Pointer to the int array.
 * @size: Size of the array.
 * @action: Function pointer.
 *
 * This function iterates over each element of the array and applies the
 * provided function pointer to each element.
 *
 * @array: Pointer to the array of integers.
 * @size: Size of the array.
 * @action: Function pointer with the signature `void (*action)(int)`.
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
    int *end = array + size - 1;

    if (array && size && action)
    {
        while (array <= end)
        {
            action(*array++);
        }
    }
}
