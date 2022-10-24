#include <stdio.h>
#include "lists.h"
/**
 * listint_len - returns the lenght of a linked list
 *
 * @h: the head o fthe list
 * Return: the lenght
 */
size_t listint_len(const listint_t *h)
{
	if (h == NULL)
		return (0);
	return (1 + listint_len(h->next));
}

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
/**
 * *insert_nodeint_at_index - inserts a node at a given index
 *
 * @head: the head node
 * @idx: the index
 * @n: the data
 * Return: the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *previous, *target;
	size_t size;

	size = listint_len((*head));
	previous = NULL;

	if (idx > size)
	return (NULL);
	if (idx == 0)
	{
		previous->next = NULL;
		previous->n = n;
		(*head) = previous;
		return ((*head));
	}
	else
	{
		previous = get_nodeint_at_index((*head), idx - 1);
		target = (listint_t *)(malloc(sizeof(listint_t)));
		if (target == NULL)
			return (NULL);
		target->n = n;
		target->next = previous->next;

		previous->next = target;
	}
	return ((*head));
}
