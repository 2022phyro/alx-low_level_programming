#include <stdio.h>
#include "lists.h"
/**
 * *add_nodeint - add a node at the head of a list
 *
 * @head: the head of the node
 * @n: the data to be added
 * Return: a pointer to the new head
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *m;

	m = (listint_t *)(malloc(sizeof(listint_t)));
	if (m == NULL)
		return (NULL);
	m->n = n;
	m->next = (*head);
	(*head) = m;
	return (*head);
}
