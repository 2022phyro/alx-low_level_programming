#include "main.h"
#include <stdio.h>
/**
 * *_strcat - it concatenates one string onto another
 * Description:'A function that replicates strncat'
 * @src: the string to be appended
 * @dest: the destination
 * Return: 'dest' if successful
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
		i++;
	j = 0;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
