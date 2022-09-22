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
	int a;

	for (a = 0; a < n && src[a] != '\0'; a++)
		dest[a] = src[a];
	for ( ; a < n; a++)
	dest[a] = '\0';
	return (dest);
}
