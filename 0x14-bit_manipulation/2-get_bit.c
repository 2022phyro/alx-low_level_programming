#include <stdio.h>
#include <stdlib.h>
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

	if (index > 63)
	{
		;
	}
	i = 0;

	if (index == 0)
		return ((n & 1));
	while (n)
	{
		i++;
		n = n >> 1;
		if (i == index)
			return ((n & 1));
	}
	return (-1);
}
