#include <stdio.h>
#include "main.h"
/**
 * _puts - it prints out a string and a new line
 * Description:'A function'
 * @str: the string to be checked
 * Return: Nothing
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
