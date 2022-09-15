#include <stdio.h>
#include "main.h"
/**
 * print_square - prints a square of hash tags
 * Description:'A function'
 * Return: nothing
 * @size: tells us the lenght of the line
 */
void print_square(int size)
{
	int line, n;

	if (size > 0)
	{
		for (line = 0; line < size; line++)
		{
			for (n = 0; n < size; n++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
