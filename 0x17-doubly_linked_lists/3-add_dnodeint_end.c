#include "lists.h"
/**
 * add_dnodeint_end - adds nodes at the end
 *
 * @head: the head
 * @n: the integer to be added
 * Return: the new head
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *new_end;

	node = (*head);
	new_end = malloc(sizeof(dlistint_t));
	if (new_end == NULL)
		return (NULL);
	new_end->n = n;
	new_end->next = NULL;
	if ((*head) == NULL)
	{
		new_end->prev = NULL;
		(*head) = new_end;
		return (*head);
	}
	while (node->next != NULL)
	{
		node = node->next;
	}
	node->next = new_end;
	new_end->prev = node;
	return (*head);
}
