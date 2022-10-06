#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * array_range - creates an array between the specified ranges
 *
 * @min: the lower mark;
 * @max: the higher mark
 * Return: A pointer to the array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int size, i;

	size = (max - min) + 1;

	if (size <= 0)
		return (NULL);
	ptr = malloc(sizeof(*ptr) * size);

	if (ptr == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		*(ptr + (i - min)) = i;
	}
	return (ptr);
	free(ptr);
}
