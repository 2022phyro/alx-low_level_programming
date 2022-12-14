#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator -  executees the given function on each parameter of the arg
 *
 * @array: the array
 * @size: the no of array elements
 * @action: the function pointer to the required function
 * Return: a pointer to action
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t j;

	if (array && action)
	for (j = 0; j < size; j++)
		action(array[j]);
}
