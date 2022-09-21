#include "main.h"
#include <stdio.h>
/**
 * *_strncat - it con catenates one string onto another
 * Description:'A function that replicates strncat'
 * @src: the string to be appended
 * @dest: the destination
 * @n: the limit for the concatention
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
