#include <stdio.h>
#include "main.h"
/**
 * _isupper -  checks for uppercase letters
 * Description:'it checks for the upper case letters, it is a function'
 * Return: 1 if correct
 * @c: the integer to be checked
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
