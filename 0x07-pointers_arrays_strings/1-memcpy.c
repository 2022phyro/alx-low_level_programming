#include "main.h"
/**
 * _memcpy - Copies the memory address of a pointer
 * @dest: the destination
 * @src: the source memory area for copying
 * @n: the limit
 * Description:'A function mimicking the original memcpy in c'
 * Return: dest if successful
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char **dest2 = &dest;
	size_t no = 0;
	while (no < n)
	{
		**dest2 = (*(src + no));
		no++;
	}
	return (dest);
}
