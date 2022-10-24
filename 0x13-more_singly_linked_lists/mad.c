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
<<<<<<< HEAD
	listint_t *previous, *target, *nez;
=======
	listint_t *previous, *target;
>>>>>>> faf639d7194ea6733e8f20b4321b768d2be20dac
	size_t size;

	size = listint_len((*head));
	previous = NULL;

	if (idx > size)
	return (NULL);
	if (idx == 0)
	{
<<<<<<< HEAD
		target = (*head);
		previous = NULL;
=======
		previous->next = NULL;
		previous->n = n;
		(*head) = previous;
		return ((*head));
>>>>>>> faf639d7194ea6733e8f20b4321b768d2be20dac
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
<<<<<<< HEAD
	nez = (listint_t *)(malloc(sizeof(listint_t)));
	nez->n = n;
	previous->next = nez;
	nez->next = target;
=======
>>>>>>> faf639d7194ea6733e8f20b4321b768d2be20dac
	return ((*head));
}
