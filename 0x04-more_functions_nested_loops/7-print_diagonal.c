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
	int line;

	if (n > 0)
	{
		for (line = 0; line <= n; line++)
		{
			`
			_putchar('\\');
			_putchar(' ');

		}
	}
	_putchar('\n');
}
