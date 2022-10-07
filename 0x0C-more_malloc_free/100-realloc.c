#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *Memcpy - copies a memory address
 *
 * @dst: the destination
 * @src: the source
 * @cnt: the limit
 * Return: a void pointer
 */
void *Memcpy(void *dst, const void *src, unsigned int cnt)
{
	char *pzDest = (char *)dst;
	const char *pszSource = (const char *)src;

	if ((pzDest != NULL) && (pszSource != NULL))
	{
		while (cnt)
		{
			*(pzDest++) = *(pszSource++);
			--cnt;
		}
	}
	return (dst);
}
/**
 * *_realloc - mimicks the realloc function
 *
 * @old_size: the old allocation size
 * @new_size: the new allocation size
 * @ptr: the old allocation
 * Return: a pointer to the newly allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr2;

	if (new_size == old_size)
	{
		return (ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr2 = malloc(new_size);

	if (ptr == NULL)
		return (ptr2);
	Memcpy(ptr2, ptr, old_size);
	free(ptr);
	return (ptr2);
	free(ptr2);
}
