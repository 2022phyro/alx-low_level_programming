#include "main.h"
#include <stdio.h>
/**
 *  _pow_recursion - Returns the result of a number raised to a specific power
 * Description:'A function'
 * Return: the number raised to a particular powe or -1 if n < 0
 * @x: the integer
 * @y: the power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
