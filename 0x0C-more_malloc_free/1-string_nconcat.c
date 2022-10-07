#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strlen - it gives us the lenght of a string
 *
 * @s: the string
 * Return: Nothing
 */
int _strlen(char *s)
{
	int k;

	for (k = 0; *(s + k) != '\0'; k++)
		;
	return (k);
}
/**
 * *string_nconcat - concatenates two strings
 *
 * Return: A pointer to the allocated memory
 * @s1: the first string
 * @s2: the second string
 * @n: the limit;
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int s, i, j, q;
	unsigned int t;
	char *str;

	s = _strlen(s1);
	t = _strlen(s2);
	q = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	if (n >= t)
		q = t;
	else
		q = n;
	str = malloc(sizeof(*str) * (q + s) + 1);

	if (str == NULL)
	{
		free(str);
		return (NULL);
	}
	for (i = 0; i < s; i++)
		*(str + i) = s1[i];
	for (j = 0; j < q; j++)
	{
		*(str + i) = s2[j];
		i++;
	}
	*(str + i) = '\0';
	return (str);
	free(str);

}
