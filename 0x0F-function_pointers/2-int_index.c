#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - searches for an integer
 *
 * @array: the array in which the searching occurs
 * @size: the array lenght
 * @cmp: a pointer to the function
 * Return: a pointer to the function
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int j, k;

	if (array == NULL)
		return (NULL);
	if (size <= 0 || size == NULL)
		return (-1);
	for (j = 0; j < size; j++)
	{
		k = cmp(array[j]);
		if (k != 0)
			return (j);
	}
	return (-1);
}
