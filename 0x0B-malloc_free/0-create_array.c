#include "main.h"

/**
 * create_array - creates an array of chars, and initializes it with a specific char.
 * @size: size of the array to be created.
 * @c: specific char to initialize the array with.
 *
 * Return: pointer to the array, or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
  if (size == 0)
    return (NULL);

  char *arr = malloc(sizeof(char) * size);
  if (arr == NULL)
    return (NULL);

  unsigned int i;
  for (i = 0; i < size; i++) {
    arr[i] = c;
  }

  return (arr);
}
