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
 * get_dnodeint_at_index - returns a node at a given index
 *
 * @head: the head node
 * @index: the index
 * Returns: the index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *temp = head;
	unsigned int j = len(temp);

	if (j == 0 || j <= index)
		return (NULL);

	for (i = 0; i < j; i++)
	{
		if (i == index)
			break;
		head = head->next;
	}
	return (head);
}
