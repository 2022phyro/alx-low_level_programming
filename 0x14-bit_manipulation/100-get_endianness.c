#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * get_endianness - checks the endian of our machine
 *
 * Return: 0 or 1 depending on outcome
 */
int get_endianness(void)
{
	unsigned int i;
	char *c;

	i = 1;
	c = (char *)&i;
	if (*c == 1)
		return (1);
	return (0);
}
