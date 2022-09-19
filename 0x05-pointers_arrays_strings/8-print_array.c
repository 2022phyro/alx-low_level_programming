#include <stdio.h>
#include "main.h"
/**
 * print_array - prints all elements of n number of an array
 * @a: the array to be printed
 * @n: the number of elements to be printed
 * Return: Nothing
 * Description:'A function'
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", a[i]);
		else
			printf(", %d", a[i]);
	}
	printf("\n");
}
