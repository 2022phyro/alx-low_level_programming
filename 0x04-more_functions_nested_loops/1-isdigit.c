#include <stdio.h>
#include "main.h"
/**
 * _isdigit - checks if the entered number is a digit
 * Description:'A function'
 * Return: 1 if accurate
 * @c: the number to be checked
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
