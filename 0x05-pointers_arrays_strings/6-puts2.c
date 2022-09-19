#include <stdio.h>
#include "main.h"
/**
 * puts2 - prints out every other element of the string
 * Description:'A function'
 * @str: the string to be checked
 * Return: nothing
 */
void puts2(char *str);
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
