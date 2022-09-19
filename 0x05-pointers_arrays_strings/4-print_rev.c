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
	int n = _strlen(s);
	int i;

	for (i = n - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
