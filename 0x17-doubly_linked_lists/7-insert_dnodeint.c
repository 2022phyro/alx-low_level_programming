#include "lists.h"
/**
 * len - gives the lenght of a linked list
 *
 * @h: the head node
 * Return: the lenght
 */
size_t len(dlistint_t *h)
{
	size_t i = 0;
	
	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
/**
 * insert_dnodeint_at_index - inserts a node at a given index
 *
 * @h: the head node
 * @idx: the index
 * @n: the new node value
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i, j;
	dlistint_t *temp = (*h), *node, *temp2;
	
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
	{
		free(node);
		return (NULL);
	}
	temp2 = (*h);
	j = len(temp);
	if ( j <= idx)
		return (NULL);
	if (idx == 0)
		add_dnodeint(h, n);
	else if (idx == j - 1)
		add_dnodeint_end(h, n);
	else
	{
		for (i = 0; i < j; i++)
		{
			if (i + 1 == idx)
				break;
			temp2 = temp2->next;
		}
		node->n = n;
		node->next = temp2->next;
		node->prev = temp;
		temp->next = node;
	}
	return (*h);
}
