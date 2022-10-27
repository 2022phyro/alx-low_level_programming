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

	if (index >= sizeof((unsigned long int) * 8))
	{
		return(-1);
	}
	i = 0;
	while (n)
	{
		if (i == index)
			return ((n & 1));
		if (n == 0)
			break;
		i++;
		n = n >> 1;
	}
	return (-1);
}
