#include "main.h"
#include <stdio.h>
/**
 * _strchr - performs the function of the usual strchr function in c
 * @s: the string being checked
 * @c: the criteria
 * Description:'A function'
 * Return: s
 */
char *_strchr(char *s, char c)
{
	while (*s && *s != c)
		++s;
	return ((char *)(c == *s ? s : NULL));
}
