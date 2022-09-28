#include "main.h"
#include <stdio.h>
/**
 * factorial - It finds the factorial of a given integer
 * Description:'A function'
 * Return: The factorial result or -1 if the number is lowe than zero
 * @n: the number to be checked
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
