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
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	if ((n & (1 << index)) == 0)
		return (0);
	return (1);
}
