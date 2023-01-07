#include "hash_tables.h"
/**
 * key_index - gives us the index of a value
 *
 * @key: the hash key
 * @size: the size of the table
 * Return: the index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int i, j;

	j = hash_djb2(key);

	i = j % size;

	return (i);
}
