#include <stdio.h>
#include "main.h"
/**
 * bit_len - gives the number of bits
 *
 * @n: the integer to be checked
 * Return: the number of bits in the byte
 */
unsigned int bit_len(unsigned long int n)
{
	unsigned int i;

	if (n == 0)
		return (1);
	i = 0;

	while (n)
	{
		i++;
		n = n >> 1;
	}
	return (i);
}
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

	if ((*n) == 0)
		(*n) = 0 | (1 << index);

	else
	{
		k = (*n);
		if (bit_len(k) - 1 < index)
		return (-1);
		(*n) = k | (1 << index);
	}
	return (1);
}
