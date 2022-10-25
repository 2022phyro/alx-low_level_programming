#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - frees a list
 *Description:'A function'
 * @head: the list to be freed
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	if ((*head) == NULL)
	{
		free((*head));
		head = NULL;
	}
	listint_t *temp;

	while ((*head) != NULL)
	{
		temp = (*head);
		free(temp);
		(*head) = (*head)->next;
	}
	free(head);
	(*head) = NULL;
}
