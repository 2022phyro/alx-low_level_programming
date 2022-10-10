#include <stdlib.h>
#include "dog.h"
/**
 * *new_dog -  creates a new dog
 * @name: the first member
 * @age: the second member
 * @owner: the third member
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	ptr =malloc(sizeof(dog_t));
	if (ptr == NULL)
		exit(98);
	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;
	return (ptr);
}
