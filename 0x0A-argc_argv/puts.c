#include <stdio.h>
#include "main.h"
/**
 * _puts - prints a string
 *
 * Return: nothing
 * @s: the string to be printed
 */
void _puts(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	putchar(*s);
	_puts(s + 1);
}
