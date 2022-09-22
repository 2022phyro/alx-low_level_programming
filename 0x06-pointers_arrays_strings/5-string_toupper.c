#include <stdio.h>
#include "main.h"
/**
 * *string_toupper - Changes all lowercase letters to uppercase
 * @s: The string whose case is to be changed
 * Return: 's' if successful
 * Description:'A function'
 */
char *string_toupper(char *s)
{
	int k;

	for (k = 0; s[k] != '\0'; k++)
	{
		s[k] = s[k] - 32;
	}
	return (s);
}
