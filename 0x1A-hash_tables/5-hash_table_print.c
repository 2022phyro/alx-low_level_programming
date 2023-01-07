#include "hash_tables.h"
/**
 * hash_table_print - prints all the elements of the hash table
 *
 * @ht: the hash table
 * Return: nothing, it is void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{

			for (; ht->array[i]; ht->array[i] = ht->array[i]->next)
			{
				printf("'%s': ", ht->array[i]->key);
				printf("'%s'", ht->array[i]->value);
				if (ht->array[i]->next)
					printf(", ");
			}
			break;
		}
	}
	for (; i < ht->size; i++)
	{
		if (!ht->array[i])
			continue;
		printf(", ");
		for (; ht->array[i]; ht->array[i] = ht->array[i]->next)
		{
			printf("'%s': ", ht->array[i]->key);
			printf("'%s'", ht->array[i]->value);
			if (ht->array[i]->next)
				printf(", ");
		}
	}
	printf("}\n");
}
