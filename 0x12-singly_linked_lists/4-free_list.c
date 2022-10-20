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
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
