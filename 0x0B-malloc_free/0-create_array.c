#include <stdlib.h>
#include "main.h"

/**
 * create_array - Creates an array of chars and initializes it with a specific char.
 * @size: The size of the array to be created.
 * @c: The char value to be used to initialize each element of the array.
 *
 * Return: On success, returns a pointer to the array. On failure or if size is 0, returns NULL.
 */
char *create_array(unsigned int size, char c)
{
  char *arr;

  if (size == 0) {
    return NULL;
  }

  arr = malloc(size * sizeof(char));

  if (arr == NULL) {
    return NULL;
  }

  for (unsigned int i = 0; i < size; i++) {
    arr[i] = c;
  }

  return arr;
}
