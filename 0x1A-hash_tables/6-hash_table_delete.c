#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 *
 * @ht: the hash table
 * Return: nothing, it is void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp, *node;

	for (i = 0; i <  ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			node = ht->array[i];
			while (node)
			{
				temp = node->next;
				free(node->value);
				free(node->key);
				free(node);
				node = temp;
			}
		}
	}
	free(ht->array);
	free(ht);
}
