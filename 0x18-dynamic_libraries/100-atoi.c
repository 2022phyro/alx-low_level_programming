#include <stdio.h>
#include "main.h"
/**
 * _atoi - converts a string into an integer
 * Description;'A function'
 * @s: the string to be converted
 * Return: the integer converted from the string
 */
int _atoi(char *s)
{
	int a, b, c, d, digit1, digit2;

	a = 0;
	b = 0;
	c = 0;
	d = 0;
	digit1 = 0;
	digit2 = 0;

	while (s[a] != '\0')
		a++;
	while (b < a && digit1 == 0)
	{
		if (s[b] == '-')
			++d;
		if (s[b] >= '0' && s[b] <= '9')
		{
			digit2 = s[b] - '0';
			if (d % 2)
				digit2 = -digit2;
			c = c * 10 + digit2;
			digit1 = 1;
			if (s[b + 1] < '0' || s[b + 1] > '9')
				break;
			digit1 = 0;
		}
		b++;
	}
	if (digit1 == 0)
		return (0);
	return (c);
}
