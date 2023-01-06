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
	unsigned long int index;
	hash_node_t *new_v, *temp;
	char *val, *kei;

	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];
	val = strdup(value);
	kei = strdup(key);
	if (val == NULL || key == NULL || kei == NULL || value == NULL
			|| ht == NULL || *key == '\0' || index >= ht->size)
	{
		free(val);
		free(kei);
		return(0);
	}
	for (; temp; temp = temp->next)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = val;
			free(kei);
			return (1);
		}
	}
	new_v = malloc(sizeof(hash_node_t));
	if (new_v == NULL)
	{
		free(new_v);
		free(kei);
		free(val);
		return (0);
	}
	new_v->value = val;
	new_v->next = ht->array[index];
	new_v->key = kei;
	ht->array[index] = new_v;
	free(temp);
	return (1);

}
