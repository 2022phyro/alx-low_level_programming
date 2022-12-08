#include "lists.h"
/**
 * add_dnodeint - adds a new node at the head
 *
 * @head: the head node
 * @n: the parameter
 * Return: the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
	{
		free(temp);
		return (NULL);
	}
	temp->prev = NULL;
	temp->n = n;
	temp->next = (*head);
	if ((*head) != NULL)
		(*head)->prev = temp;
	(*head) = temp;

	return ((*head));
}
