#include <stdio.h>
#include "lists.h"
/**
 * *reverse_listint - reverses the list
 *
 * @head: the head node
 * Return: the reversed string
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *curr;

	if ((*head) == NULL)
		return (NULL);
	prev = (*head);
	(*head) = (*head)->next;
	prev->next = NULL;
	curr = (*head);
	while ((*head))
	{
		(*head) = (*head)->next;
		curr->next = prev;
		prev = curr;
		curr = (*head);

	}
	(*head) = prev;
	return (*head);
}
