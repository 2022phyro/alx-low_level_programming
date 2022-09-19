#include <stdio.h>
#include "main.h"
/**
 * swap_int - it swaps the values of two integers
 * Description:'A function'
 * @a: integer to be swapped
 * @b: integer to be swapped
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	a = &b;
	b = &a;
	*a = b;
	*b = a;
}
