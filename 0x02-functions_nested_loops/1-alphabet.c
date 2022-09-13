#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - prints all the leyters of the alphabet
 * Description: uses a loop
 * Return: 0 if success
 */
void print_alphabet(void)
	{int i;
		for (i = 'a'; i <= 'z'; i++)
		{
		_putchar(i);
		}
		_putchar('\n');
	}

