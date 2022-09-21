#include <stdio.h>
#include "main.h"
/**
 * *_strncpy - copies the string pointed to by src by n characters
 * @dest: the destination for the copied string
 * @src: the string to be copied
 * Return: dest if successful
 * @n: the limit for the copying
 * Description:'A function'
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a, b;

	a = 0;

	while (src[a] != '\0')
	{
		a++;
	}
	for (b = 0; b < n; b++)
	{
		dest[b] = src[b];
	}
	dest[b] = '\0';

	return (dest);
}
