#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint_end - adds a node at the end
 *
 * @head: the head of the node
 * @n: the new data
 * Return: a pointer to the new end
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *m;

	m = (listint_t *)(malloc(sizeof(listint_t)));
	if (m == NULL)
		return (NULL);
	temp = (*head);
	m->n = n;
	m->next = NULL;
	if ((*head) == NULL)
	{
		(*head) = m;
		return ((*head));
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = m;
	return ((*head));
}



