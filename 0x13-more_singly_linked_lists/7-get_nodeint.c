#include <stdio.h>
#include "lists.h"
/**
 * *get_nodeint_at_index - gets the node at a given index
 *
 * @head: the head node
 * @index: the index number
 * Return: a pointer to the given node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	if (index == 0)
		return (head);
	i = 0;
	while (i < index)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
		i++;
	}

	return (head);
}
