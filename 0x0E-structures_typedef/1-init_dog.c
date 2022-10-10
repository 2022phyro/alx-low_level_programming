#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initializes a dog
 * @d: the dog
 * @name: the first member
 * @age: the second member
 * @owner: the third member
 *
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
