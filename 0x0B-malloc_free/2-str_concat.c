#include <stdlib.h>
#include "main.h"

/**
 **str_concat - concatenates one string onto another using malloc
 *
 * @s1: the first string
 * @s2: the second string
 * Return: a pointer to the concatenation
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, k;
	char *ptr;

	if (s1 == NULL)
		return ("");
	if (s2 == NULL)
		return ("");

	for (i = 0; *(s1 + i) != '\0'; i++)
		;
	for (j = 0; *(s2 + j) != '\0'; j++)
		;
	k = i + j + 1;

	ptr = malloc(sizeof(*ptr) * k);

	if (ptr == NULL && k > 0)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		ptr[i] = s2[j];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);

	free(ptr);
}
