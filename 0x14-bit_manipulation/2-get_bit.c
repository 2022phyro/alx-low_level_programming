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
 * get_bit - gets a particular bit
 *
 * @index: the index
 * @n: the number
 * Return: the pointed bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	i = 0;

	if (index == 0)
		return ((n & 1));
	if (bit_len(n) < (index + 1))
		return (-1);
	while (n)
	{
		i++;
		n = n >> 1;
		if (i == index)
			return ((n & 1));
	}
	return (-1);
}
