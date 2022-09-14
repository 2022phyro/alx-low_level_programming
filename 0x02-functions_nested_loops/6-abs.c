#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *_abs - computes the absolute value of a number
 *@k: the value to be computed
 *Return: 'k' if accurate
 */
int _abs(int k)
{
	if (k >= 0)
		return (k);
	return (-k);
}
