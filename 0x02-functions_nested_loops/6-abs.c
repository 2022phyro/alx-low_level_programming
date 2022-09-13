#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *abs - computes the absolute value of a number
 *@k: the value to be computed
 *Return: 'k' if accurate
 */
int abs(int k)
{
	if (k >= 0)
		return (k);
	else
	{
		return (-k);
	}
}
