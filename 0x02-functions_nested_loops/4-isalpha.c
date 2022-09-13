#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *isalpha - checks if a character is a letter
 *@c: the charactee to be checked
 *Description:'a function'
 *Return: 0 if accurate
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
