#include <stdio.h>
#include "main.h"
/**
 * _isdigit -  checks for numbers
 * Description:'it checks for numbers it is a function'
 * Return: 1 if correct
 * @c: the integer to be checked
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
