#include <stdio.h>
#include "main.h"
/**
 * print_times_table -  prints the time table of an integer
 * Description:'does the above in a new function'
 * Return: nothing
 * @n: the integer to be printed
 */
void print_times_table(int n)
{
	if (!(n > 15 || n < 0))
	{
		int num, mult, prod;

		for (num = 0; num <= n; num++)
		{
			_putchar('0');
			for (mult = 1; mult <= n; mult++)
			{
				_putchar(',');
				_putchar(' ');
				prod = num * mult;
				if (prod <= 99)
					_putchar(' ');
				if (prod <= 9)
					_putchar(' ');
				if (prod >= 100)
				{
					_putchar((prod / 100) + '0');
					_putchar((prod / 10) % 10 + '0');
				}
				else if (prod <= 99 && prod >= 10)
					_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
