#include <stdio.h>
#include "main.h"
/**
 * *_strncpy - copies the string pointed to by src till a limit n
 * @dest: the destination for the copied string
 * @src: the string to be copied
 * Return: 'dest' if successful
 * Description:'A function'
 * @n: the limit for copying the string
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
