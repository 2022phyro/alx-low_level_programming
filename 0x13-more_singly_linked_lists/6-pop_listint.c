#include <stdio.h>
#include "lists.h"
/**
 * pop_listint - deletes the head node
 *
 * Description:'A function'
 * @head: the head node
 * Return: the head node's data
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if ((*head) == NULL)
		return (0);

	temp = (*head);
	n = (*head)->n;
	(*head) = (*head)->next;
	free(temp);
	return (n);
}
