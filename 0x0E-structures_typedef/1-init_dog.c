#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initializes a struct
 *
 * @d: the struct to be initialized
 * @name: the first member
 * @age: the second memeber
 * @owner: the third member
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *man;

	man = malloc(sizeof(struct dog));
	if (man == NULL)
		exit(98);
	man = d;
	man->name = name;
	man->age = age;
	man->owner = owner;
}
