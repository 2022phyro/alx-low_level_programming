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
	char *val, *kei;

	index = key_index((const unsigned char *)key, ht->size);
	val = strdup(value);
	kei = strdup(key);
	if (val == NULL || key == NULL || kei == NULL || value == NULL
			|| ht == NULL || *key == '\0' || index >= ht->size)
	{
		free(val);
		free(kei);
		return(0);
	}
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = val;
			free(kei);
			return (1);
		}
	}
	new_v = malloc(sizeof(hash_node_t));
	if (new_v == NULL)
	{
		free(kei);
		free(val);
		return (0);
	}
	new_v->value = val;
	new_v->next = ht->array[index];
	new_v->key = kei;
	ht->array[index] = new_v;
	return (1);

}
