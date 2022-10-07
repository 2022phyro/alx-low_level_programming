#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *Memset - seta a memory address
 *
 * @s: the memory to be set
 * @c: the value
 * @len: the limit
 * Return: a pointer to the set memory
 */
void *Memset(void *s, int c, unsigned int len)
{
	unsigned char *p = s;

	while (len--)
	{
		*p++ = (unsigned char)c;
	}
	return (s);
}
/**
 * _calloc - micks the calloc function
 *
 * @nmemb: the array size
 * @size: the memory size
 * Return: a pointer to the allocated space
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *st;
	void *end;

	if (nmemb == 0 || size == 0)
		return (NULL);

	st = malloc(size * nmemb);

	if (st == NULL)
		return (NULL);

	end = Memset(st, 0, (nmemb * size));
	return (end);
}
