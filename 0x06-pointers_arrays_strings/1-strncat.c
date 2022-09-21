#include "main.h"
#include <stdio.h>
/**
 * *_strncat - it concatenates one string onto another
 * Description:'A function'
 * @src: the string to be appended to
 * @dest: the destination
 * Return: 'dest' if successful
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
		i++;
	j = 0;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
