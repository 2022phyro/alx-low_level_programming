#include "hash_tables.h"
shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int i;
	shash_table_t *ht;

	if (size <= 0)
		return (NULL);
	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
	{
		free(ht);
		return (NULL);
	}
	ht->array = malloc(sizeof(shash_node-t) * size);
	if (ht->array == NULL)
	{
		free(ht->array);
		free(ht);
		return (NULL);
	}
	for ( i = 0; i < size; i++)
	{
		ht->array[i] = NULL;
	}
	ht->size = size;
	ht->shead = NULL;
	ht->stail = NULL;
	return (ht);
}
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
}
