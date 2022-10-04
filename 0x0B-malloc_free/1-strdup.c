#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - this function mimicks the strcpy c using malloc.
 *
 * @str: the string to be copied
 * Return: a pointer to the copy
 */
char *_strdup(char *str)
{
	char *p;
	int i, j;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; *(str + i) != '\0'; i++)
		;

	p  = malloc(sizeof(*p) * (i + 1));

	if (p == NULL)
	{
		return (NULL);
	}

	for (j = 0; *(str + j) != '\0'; j++)
	{
		*(p + j) = *(str + j);
	}
	*(p + j) = '\0';

	return (p);
	free(p);
}
