#include <stdio.h>
#include "main.h"
/**
 * times_tables - prints time table
 * Return: 0 if success
 */
void (times_tables(void)
{
	int m, n, o;

	for (m = 0; m <= 9; m++)
	{
		_putchar('0');
		for (n = 1 n <= 9; n++)
		{
			_putchaar(',');
			_putchar(' ');
			o = m * n
			if (o <= 9)
				_putchar(' ');
				else
					_putchar(p / 10  +'0');
					_putchar(p % 10  + '0');
		}
		putchar ("\n");
	}
}
