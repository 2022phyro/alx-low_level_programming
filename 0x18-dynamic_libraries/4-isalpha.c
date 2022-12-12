#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * _isalpha - checks if a character is an alphabet
 * Description:'Does thsame as the above function'
 * @c: the character to be checked
 * Return: 1 if correct else 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
