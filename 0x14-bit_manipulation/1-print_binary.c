#include <stdio.h>
#include "main.h"
/**
 * print_bin - prints a number in binary
 *
 * @n: the number to be printed
 * Return: nothing
 */
void print_bin(unsigned long int n)
{
	if (n == 0)
	{
		return;
	}
	print_bin(n >> 1);
	putchar((n & 1) + '0');
}
/**
 * print_binary - calls the print_bin function
 *
 * @n: the number to be printed
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		putchar('0');
		return;
	}
	else
	print_bin(n);
}
