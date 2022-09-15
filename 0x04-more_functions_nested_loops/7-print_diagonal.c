#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - prints a diagonal line
 * Description:'A function'
 * Return: nothing
 * @n: tells us the lenght of the line
 */
void print_diagonal(int n)
{
	int line, spec;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
		{
			for (spec = 0; spec < n; spec++)
			{
				if (line == spec)
					_putchar('\\');
				else
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
