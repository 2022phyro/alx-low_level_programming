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
	char *val;
	hash_table_t *head;

	if (ht == NULL || key == NULL || value == NULL || *key == '\0')
		return (0);
	head = ht;
	index = key_index((const unsigned char *)key, ht->size);
	val = strdup(value);
	if (val == NULL)
		return (0);
	temp = ht->array[index];
	if (temp)
	{
		for (; temp != NULL; temp = temp->next)
		{
			if (strcmp(temp->key, key) == 0)
			{
				temp->value = val;
				return (1);
			}
		}
	}
	new_v = malloc(sizeof(hash_node_t));
	if (new_v == NULL)
	{
		free(val);
		return (0);
	}
	new_v->key = strdup(key);
	if (new_v->key == NULL)
	{
		free(val);
		return (0);
	}
	new_v->value = val;
	new_v->next = head->array[index];
	head->array[index] = new_v;
	return (1);
}
