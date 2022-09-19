#include <stdio.h>
#include "main.h"
/**
 * puts2 - prints out every other element of the string
 * Description:'A function'
 * @str: the string to be checked
 * Return: nothing
 */
void puts2(char *str)
{
	int i, k;

	for (i = 0; str[i] != '\0'; i++)
		;
	for (k = 0; k < i; k += 2)
		_putchar(str[k]);
	_putchar('\n');
}
