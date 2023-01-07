#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value from the hash table
 *
 * @ht: the table
 * @key: the key
 * Return: the value or NULL if the value can't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp;

	if (ht == NULL)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];
	for (; temp; temp = temp->next)
	{
		if (strcmp(temp->key, key) == 0)
		{
			return ((char *)temp->value);
		}
	}
	return (NULL);
}
