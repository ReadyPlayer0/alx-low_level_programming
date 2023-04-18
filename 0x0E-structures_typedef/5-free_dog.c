#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dog_t struct
 * @d: pointer to the dog_t struct to free
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
    if (d != NULL)
    {
        free(d->name);
        free(d->owner);
        free(d);
    }
}
