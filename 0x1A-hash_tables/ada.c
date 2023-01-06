#include "hash_tables.h"
/**
 * shash_table_create - create a sorted hash table
 *
 * @size: the size of the table
 * Return: the newly created table or NULL if it fails
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int i;
	shash_table_t *ht;

	if (size <= 0)
		return (NULL);
	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);
	
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}
	for ( i = 0; i < size; i++)
	{
		ht->array[i] = NULL;
	}
	ht->size = size;
	ht->shead = malloc(sizeof(shash_node_t));
	if (ht->shead == NULL)
	{
		free(ht->array);
		free(ht);
	}
	ht->stail = malloc(sizeof(shash_node_t));
	if (ht->shead == NULL)
	{
 		free(ht->array);
 		free(ht->shead);
		free(ht);
	}

	ht->shead = NULL;
	ht->stail = NULL;
	return (ht);
}
/**
 * sorted_insert - sorts the linked_list
 *
 * @head: the head;
 * @mem: the new node ot be sorted
 * Return: void
 */
void sorted_insert(shash_table_t *ht, shash_node_t *mem)
{
	shash_node_t *temp, *last;
	char *key_temp;	
	
	if (ht->shead == NULL)
	{
		ht->shead = mem;
		ht->stail = mem;
		return;
	}
	temp = ht->shead;
	for (; temp; temp = temp->snext)
	{
		key_temp = temp->key;
		if (strcmp(compare(key_temp, mem->key), mem->key) == 0 )
		{
			if (temp->sprev == NULL)
			{
				ht->shead = mem;
				mem->sprev = NULL;
				mem->snext = temp;
				temp->sprev = mem;
				return;
			}
			last = temp->sprev;
			mem->sprev = last;
			last->next = mem;
			mem->snext = temp;
			temp->sprev = mem;
			return;
		}
		last = temp;
	}
	mem->sprev = last;
	last->snext = mem;
	ht->stail = mem;
	
}
/**
 * compare - returns the higher string
 *
 * @s1: string 1
 * @s2: string 2
 * Return: the higher string
 */
char *compare(char *s1, char *s2)
{
	unsigned long int i;
	for (i = 0; i < strlen(s1); i++)
	{
		if (s1[i] < s2[i])
			return (s1);
		if (s2[i] < s1[i] || s2[i] == '\0')
			return (s2);
	}
	return (s1);

}
/**
 * shash_table_set - adds a new key, value pair to the hash table
 *
 * @key: the key
 * @value: the value
 * @ht: the hash table
 * Return: 1 if it succeeds or 0 if it fails
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
        shash_node_t *new_v, *temp;
        char *val;
        shash_table_t *head;

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
        new_v = malloc(sizeof(shash_node_t));
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
	new_v->snext = NULL;
	new_v->sprev = NULL;
	head->array[index] = new_v;
	sorted_insert(ht, new_v);
        return (1);

}
/**
 * shash_table_get - retrieves a key, value pair from the hash table
 *
 * @ht: the hash table
 * @key: the key
 * Return: the value
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t * temp;
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
/**
 * shash_table_print - print the table in a  sorted form
 *
 * @ht: the hash table
 * Return: nothing, it is void
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *temp;

	if (!ht)
		return;
	temp = ht->shead;
	printf("{");
	for (; temp; temp = temp->snext)
	{
		printf("'%s': ", temp->key);
		printf("'%s'", temp->value);
		if (temp->snext)
			printf(", ");
	}
	printf("}\n");
}
/**
 * shash_table_print_rev - prints the hash table in reverse order
 *
 * @ht: the hash table
 * Return: Nothing, it is void
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tail;
	if (!ht)
		return;
	tail = ht->stail;
	printf("{");
	for (; tail; tail = tail->sprev)
	{
		printf("'%s': ", tail->key);
		printf("'%s'", tail->value);
		if (tail->sprev)
			printf(", ");
	}
	printf("}\n");
}
/**
 * shash_table_delete - deletes a hash table
 *
 * @ht: the hash table
 * Return: nothing, it is void
 */
void shash_table_delete(shash_table_t *ht)
{
	(void)ht;
}
