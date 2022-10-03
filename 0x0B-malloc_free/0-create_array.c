#include <stdlib.h>
#include "main.h"

/**
 * *create_array - this function allocates a memory space to an array
 *
 * @size: the lenght of the array
 * @c: the character to initialize with
 * Return: a pointer to the array;
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = malloc(sizeof(*ptr) * size);

	if (ptr == NULL || size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
	free(ptr);
}
