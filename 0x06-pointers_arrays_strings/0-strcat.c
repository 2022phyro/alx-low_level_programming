#include "main.h"
#include <stdio.h>
/**
 * _strcat - concatenates two strings together
 * Description:'A function'
 * @dest: the string where the src string will be appended to
 * @src: the string to append
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
		dest[i] = src [j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
