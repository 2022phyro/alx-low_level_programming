#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initializes the variables in a struct dog type
 *
 * @d: the first element
 * @name: the second element
 * @age: the third element
 * @owner:the name of the dog's owner
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
