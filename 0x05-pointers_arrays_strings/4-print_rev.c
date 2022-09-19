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

	for (i = 0; s[i] != '\0'; i++)
		;
	index = i
	for (j = index - 1; index >= 0; index--)
		_putchar(s[jj]);
	_putchar('\n');
}
