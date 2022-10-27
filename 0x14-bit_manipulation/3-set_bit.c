#include <stdio.h>
#include "main.h"
/**
 * set_bit - seta a bit at a given mark to 1
 *
 * @n: the number
 * @index: the position to be set
 * Return: 1 if success
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int k;

	if (index > 63)
		return (-1);
	k = (*n);
	(*n) = k | (1 << index);
	return (1);
}
