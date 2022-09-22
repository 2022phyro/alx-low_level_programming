#include <stdio.h>
#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: the string to be compared
 * @s2: the second string to be compared
 * Description:'A function'
 * Return: j if successful
 */
int _strcmp(char *s1, char *s2)
{
	int i, j;

	i = 0;
	j = 0;

	while (j == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
			break;
		j = *(s1 + i) - *(s2 + i);
		i++;
	}
	return (j);
}
