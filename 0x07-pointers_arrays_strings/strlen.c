#include <stdio.h>
#include "main.h"
/**
 * _strlen - it swaps the values of two integers
 * Description:'A function'
 * @s: the string to be checked
 * Return: The lenght of the string
 */
int _strlen(char *s)
{
	int i, lenght;

	lenght = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		lenght++;
	}
	return (lenght);
}
