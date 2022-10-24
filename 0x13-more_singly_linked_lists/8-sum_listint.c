#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - sums all the data of the list
 *
 * @head: the head of the linked list
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
	if (head == NULL)
	return (0);
	return (head->n + sum_listint(head->next));
}
