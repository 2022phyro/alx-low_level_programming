#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_last_digit - it prints the lat digit of each number
 * Description:'A new function'
 * Return: 0 if positive.
 * @m: the data type to be checked
 */
int print_last_digit(int m)
{
	int j = m % 10;

	if (j < 0)
	j *= -1;
	_putchar(j + '0');
	return (j);
}
