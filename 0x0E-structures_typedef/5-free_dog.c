#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * free_dog - frees a 'dog'
 *
 * @d: The 'dog' to be freed
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->owner);
	free(d->name);
	free(d);
}
