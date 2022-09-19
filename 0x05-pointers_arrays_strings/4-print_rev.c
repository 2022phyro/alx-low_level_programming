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
	int i, index;

	i = 0;

	while (s[i++])
		index++;
	for (i = index - 1; index >= 0; index--)
		_putchar(s[i]);
	_putchar('\n');
}
