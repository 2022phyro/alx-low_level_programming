#include <stdio.h>
#include "main.h"
/**
 * print_line - prints a straight line
 * Description:'A function'
 * Return: nothing
 * @n: tells us the lenght of the line
 */
void print_line(int n)
{
	int line;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
