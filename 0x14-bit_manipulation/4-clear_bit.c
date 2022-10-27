#include <stdio.h>
#include "main.h"
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

	if (index > 63)
	{
		;
	}
	else
	{
		while (n)
		{
			if (i == index)
				return ((n & 1));
			n = n >> 1;
			i++;
		}
	}
	return (-1);
}
/**
 * clear_bit -  Assign the bit to zero
 *
 * @index: the index
 * @n: the number
 * Return: 1 if successful
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int k;

	k = (*n);
	if (get_bit(k, index) == 1)
	{
		(*n) = k ^ (1 << index);
	}
	else if (get_bit(k, index) == -1)
	{
		return (-1);
	}
	return (1);
}
