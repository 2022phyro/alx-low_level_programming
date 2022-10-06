#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *malloc_checked - allocates memory and points to it
 *
 * Return: A pointer to the allocated memory
 * @b: the size of the memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
	free(ptr);
}
