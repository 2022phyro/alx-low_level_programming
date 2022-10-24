#include <stdio.h>
#include "lists.h"
/**
 * *get_nodeint_at - gets the node at a given index
 *
 * @head: the head node
 * @index: the index number
 * Return: a pointer to the given node
 */
listint_t *get_nodeint_at(listint_t *head, unsigned int index)
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
 * list_len - returns the lenght of a linked list
 *
 * @h: the head o fthe list
 * Return: the lenght
 */
size_t list_len(const listint_t *h)
{
	if (h == NULL)
	return (0);
	return (1 + list_len(h->next));
}
/**
 * delete_nodeint_at_index - deletes a node at a specific index
 *
 * @head: the head node
 * @index: the index
 * Return: 0ne if successful
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *previous, *target;
	size_t size = list_len((*head));

	if (index > size)
	return (-1);
	if ((*head) == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{

		target = (*head);
	(*head) = (*head)->next;
	free(target);
	return (1);

	}
	else
	{
		previous = get_nodeint_at((*head), index - 1);
		target = previous->next;
	}
	previous->next = target->next;
	free(target);
	return (1);
}
