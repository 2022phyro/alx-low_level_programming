#include <stdio.h>
#include "lists.h"
/**
 * pop_listint - deletes the head node
 *
 * @head: the head node
 * Return: the head node's data
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	temp = (*head);
	n = (*head)->n;
	(*head) = (*head)->next;
	free(temp);
	return (n);
}
