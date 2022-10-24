#include <stdio.h>
#include "lists.h"
/**
 * free_listint - frees a list
 *
 * @head: the head of the list to be freed
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
	return;
	free_listint(head->next);
	free(head);
}
