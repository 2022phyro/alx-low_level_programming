#include <stdio.h>
#include "main.h"
/**
 * clear_bit -  Assign the bit to zero
 *
 * @index: the index
 * @n: the number
 * Return: 1 if successful
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	(*n) = (*n) & ~(1 << index);
	return (1);
}
