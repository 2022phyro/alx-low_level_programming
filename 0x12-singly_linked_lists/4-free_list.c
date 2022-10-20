#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_list - frees the memory allocated to a liinked list
 *
 * @head: the head of the linked list
 * Return: Nothing
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;
	while (head != NULL)
	{
		free(head->str);
		free(&(head->len));
		free(len);
		head = head->next;
	}
	free(&(head->len));
	free(&(head->str));
	free(head);

}
