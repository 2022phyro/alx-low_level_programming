#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - frees a list
 *
 * @head: the list to be freed
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	if ((*head) == NULL)
		return;
	free_listint2(&((*head)->next));
	free(*head);
	(*head) = NULL;
}
