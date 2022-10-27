#include <stdio.h>
/**
 * toint - converts a char to an int
 *
 * @c: the char to be converted
 * Return: the converted char
 */
unsigned int toint(char c)
{
	return (c - '0');
}
/**
 * binary_to_uint - converts a binary to decimal
 *
 * @b: the string to be converted
 * Return: the new decimal
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, k, l;

	l = 0;
	k = 1;

	if (b == NULL)
		return (1);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (!(b[i] == '0' || b[i] == '1'))
			return (0);
		k *= 2;
	}
	k /= 2;
	for (i = 0; b[i] != '\0'; i++)
	{
		l += (toint(b[i]) * k);
		k /= 2;
	}
	return (l);

}
