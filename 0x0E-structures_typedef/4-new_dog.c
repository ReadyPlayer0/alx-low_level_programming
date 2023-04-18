#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog, or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *newdog;
    char *newname, *newowner;

    newdog = malloc(sizeof(dog_t));
    if (newdog == NULL)
        return (NULL);

    newname = malloc(strlen(name) + 1);
    if (newname == NULL)
    {
        free(newdog);
        return (NULL);
    }

    newowner = malloc(strlen(owner) + 1);
    if (newowner == NULL)
    {
        free(newname);
        free(newdog);
        return (NULL);
    }

    strcpy(newname, name);
    strcpy(newowner, owner);

    newdog->name = newname;
    newdog->age = age;
    newdog->owner = newowner;

    return (newdog);
}
