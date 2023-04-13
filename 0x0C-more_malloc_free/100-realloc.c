#include <stdlib.h>
#include <stdio.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with a call to malloc
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes, of the new memory block
 *
 * Return: pointer to the newly allocated memory block
 *         NULL if new_size is 0 and ptr is not NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
        void *new_ptr;

        if (new_size == old_size)
                return (ptr);

        if (ptr == NULL)
        {
                new_ptr = malloc(new_size);
                if (new_ptr == NULL)
                        return (NULL);
                else
                        return (new_ptr);
        }

        if (new_size == 0)
        {
                free(ptr);
                return (NULL);
        }

        new_ptr = malloc(new_size);

        if (new_ptr == NULL)
                return (NULL);

        if (new_size > old_size)
                memcpy(new_ptr, ptr, old_size);
        else
                memcpy(new_ptr, ptr, new_size);

        free(ptr);
        return (new_ptr);
}
