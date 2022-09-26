#include "main.h"
#include <stdio.h>
/**
 * _strspn - Checks for the occurence of a particular characterin a string
 *  Description:'A function'
 *  Return: 'Lenght if successful'
 *  @s: the string to be checked
 *  @accept: the criteria
 */
unsigned int _strspn(char *s, char *accept)
{
	size_t n;
	char *p;

	for (n = 0; *s; s++, n++)
	{
	for (p = accept; *p && *p != *s; p++)
		;
	if (!*p)
		break;
	}
	return (n);
}
