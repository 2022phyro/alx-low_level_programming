#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the has table
 *
 * @ht: the hash table
 * @key: the key
 * @value: the value
 * Return: 1 if it succeeds or 0 if it fails
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index, i;
	hash_node_t *new_v;
	char *val;

	index = key_index((const unsigned char *)key, ht->size);
	
	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	val = strdup(value);
	if (val == NULL)
		return (0);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			ht->array[i]->value = val;
			return (1);
		}
	}
	new_v = malloc(sizeof(hash_node_t));
	if (new_v == NULL)
		return (0);
	new_v->key = strdup(key);
	new_v->value = val;
	new_v->next = ht->array[index];
	ht->array[index] = new_v;
	return (1);

}
