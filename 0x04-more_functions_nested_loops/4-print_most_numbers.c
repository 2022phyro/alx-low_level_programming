#include <stdio.h>
#include "main.h"
/**
 * print_most_numbers - prints all the numbers from 0 to 9
 * Description:'A function'
 * Return: nothing
 */
void print_most_numbers(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		if (!(a == 2 || a == 4))
		_putchar(a % 10 + '0');
	}
	_putchar('\n');
}




