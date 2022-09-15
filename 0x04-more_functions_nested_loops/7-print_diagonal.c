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

	if (n <= 0)
		_putchar('\n');
	for (line = 0; line < n; line++)
	{
		for (spec = 0; spec < line; spec++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
