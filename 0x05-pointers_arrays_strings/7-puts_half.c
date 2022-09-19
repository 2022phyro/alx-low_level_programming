#include <stdio.h>
#include "main.h"
/**
 * puts_half - prints out the other half of the string
 * Description:'A function'
 * @str: the string to be checked
 * Return: nothing
 */
void puts_half(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
		;
	if (i % 2 != 0)
	{
		for (j = (i - 1) / 2; j <= i; j++)
			_putchar(str[j]);
	}
	else
		for (j = i / 2; j <= i; j++)
			_putchar(str[j]);
	_putchar('\n');
}
