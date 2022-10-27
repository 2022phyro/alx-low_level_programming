#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * flip_bits - returns the number of bits needed to be flipped to get a number
 *
 * @n: the first number
 * @m: the second number
 * Return: the number of flips
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count;
	unsigned int k;

	k = m ^ n;
	count = 0;

	while (k)
	{
		if ((k & 1) == 1)
			count++;
		k = k >> 1;
		if (k == 0)
			break;
	}
	return (count);
}
