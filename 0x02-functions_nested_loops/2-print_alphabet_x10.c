#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_alphabet_x10 - prints all the letters of the alphabet 10 times
 * Descruptio:'a function'
 * Return: 0 if accurate
 */
void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');

	}
}
