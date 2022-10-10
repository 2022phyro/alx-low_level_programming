#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints out the members of a struct
 *
 * @d: the pointer to the struct
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	struct dog *met;

	met = d;

	if (met == NULL)
		printf("\n");
	if (met->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", met->name);
	if (met->age <= '\0')
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", met->age);
	if (met->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", met->owner);
}
