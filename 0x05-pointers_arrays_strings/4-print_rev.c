#include <stdio.h>
#include "main.h"
/**
 *print_rev - prints out a string in reverse order
 * Description:'A function'
 * @s: the string to be checked
 * Return: nothing
 */
void print_rev(char *s)
{
	int i;

	for (i = _strlen(s) - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
