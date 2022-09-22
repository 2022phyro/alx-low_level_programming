#include <stdio.h>
#include "main.h"
/**
 * reverse_array - reverses the contents of an array
 * @a: the array to be reversed
 * @n: the limit for the copying
 * Return: nothing
 * Description:'A function'
 */
void reverse_array(int *a, int n)
{
	int j, k;
	int ch;

	j = n - 1;

	for (k = 0; k < n / 2; k++)
	{
		ch = a[k];
		a[k] = a[j];
		a[j--] = ch;
	}
}
