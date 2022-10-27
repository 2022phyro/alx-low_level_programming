#include <stdio.h>
#include "main.h"
/**
 * power - finds the power of a number
 *
 * @base: the number
 * @expo: the exponent
 * Return: the new number
 */
unsigned int power(unsigned int base, unsigned int expo)
{
	if (base == 0)
		return (0);
	if (base == 1)
		return (1);
	if (expo == 0)
		return (1);
	if (expo == 1)
		return (base);
	return (base * power(base, expo - 1));
}
/**
 * binary_to_uint - converts a  binary string to an int
 *
 * @b: the string to be converted
 * Return: the new number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int length, num;
	int i;

	length = num = 0;
	if (b == (void *)0)
		return (0);

	for (length = 0; b[length]; length++)
		if (b[length] != '0' && b[length] != '1')
			return (0);
	if (length == 0)
		return (0);
	for (i = --length; i >= 0; i--)
		if (b[i] == '1')
			num += power(2, length - i);
	return (num);
}
