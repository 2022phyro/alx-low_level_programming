#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * times_tables - prints out the nine times tables
 * Returb: 0 if success
 */
void times_tables(void)
{
	int n, m, p;

	for (n = 0; n <= 9; n++)
	{
		_putchar('0');
		for (m = 1; m <= 9; m++)
		{
			_putchar(',');
			_putchar(' ');
			p = n * m;

			if (p <= 9)
				_putchar(' ')
			else
				_putchar((p / 10) + '0'
			_putchar((p % 10) + '0');
		}
		_putchar('\n');
	}
}
