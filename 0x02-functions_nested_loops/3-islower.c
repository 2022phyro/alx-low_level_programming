#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/**
 *_islower - checks if the character is in lower case
 *Descruptio:'a function'
 *Return: 1 if accurate
 *@c: the letter to be checked
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
