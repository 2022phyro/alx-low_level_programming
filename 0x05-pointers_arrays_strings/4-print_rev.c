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

	for (i = 0; s[i] != '\0'; i++)
		;
	for (--i; i >= 0; --i)
		_putchar(s[i]);
	_putchar('\n');
}
