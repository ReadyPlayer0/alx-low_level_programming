#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct for a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the dog's owner
 *
 * Description: struct dog is a structure for a dog with a name, age, and owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

#endif /* DOG_H */