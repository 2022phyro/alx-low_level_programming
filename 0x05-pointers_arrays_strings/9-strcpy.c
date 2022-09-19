#include <stdio.h>
#include "main.h"
/**
 * *_strcpy - copies the string pointed to by src
 * @dest: the destination for the copied string
 * @src: the string to be copied
 * Return: Nothing
 * Description:'A function'
 */
char *_strcpy(char *dest, char *src)
{
	int a, b;

	a = 0;

	while (src[a] != '\0')
	{
		a++;
	}
	for (b = 0; b < a; b++)
	{
		dest[b] = src[b];
	}
	dest[b] = '\0';

	return (dest);
}
