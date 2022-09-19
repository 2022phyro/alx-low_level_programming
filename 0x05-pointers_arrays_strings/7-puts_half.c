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
	int i, j, k;

	for (i = 0; str[i] != '\0'; i++)
		;
	if (i % 2 == 0)
	{
		for (j = i / 2; str[j] != '\0'; j++)
			_putchar(str[j]);
	}
	else if (i % 2 == 1)
	{
		for (k = (i - 1) / 2; k < i - 1; k++)
			_putchar(str[k + 1]);
	}
	_putchar('\n');
}
