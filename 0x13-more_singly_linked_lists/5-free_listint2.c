#include <stdio.h>
#include "lists.h"
/**
 * free_listint2 - frees a list and set its head to null
 *
 * @head: the head node of the list
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	if ((*head) == NULL)
	return;
	free_listint2((&(*head)->next));
	free(*head);
	(*head) = NULL;
}
