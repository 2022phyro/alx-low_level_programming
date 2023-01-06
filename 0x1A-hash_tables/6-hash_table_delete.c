#include "hash_tables.h"
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp;

	for (i = 0; i <  ht->size; i++)
	{
		for (; ht->array[i]; ht->array[i] = ht->array[i]->next)
		{
			temp = ht->array[i];
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			ht->array[i] = ht->array[i]->next;
			free(temp);
		}
		free(ht->array[i]);
	}
	free(ht->array);
	free(ht);
}
