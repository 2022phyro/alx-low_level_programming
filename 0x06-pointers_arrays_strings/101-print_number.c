#include "main.h"

/**
 * print_number - prints an integer.
 * @n: The integer to be printed.
 * Return: no return.
 */
void print_number(int n)
{
	unsigned int o, d, count;

	if (n < 0)
	{
		_putchar(45);
		o = n * -1;
	}
	else
	{
		o = n;
	}

	d = o;
	count = 1;

	while (d > 9)
	{
		d /= 10;
		count *= 10;
	}

	for (; count >= 1; count /= 10)
	{
		_putchar(((o / count) % 10) + 48);
	}
}
