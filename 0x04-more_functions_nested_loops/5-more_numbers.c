#include <stdio.h>
#include "main.h"
/**
 * more_numbers - prints from 0 - 14 ten times
 * Description:'A function'
 * Return: nothing
 */
void more_numbers(void)
{
	int a, b;

	for (b = 0; b < 10; b++)
	{
		for (a = 0; a < 15; a++)
		{
			if (a > 9)
				_putchar(a / 10 + '0');
			_putchar(a % 10 + '0');
		}
		_putchar('\n');
	}
}
