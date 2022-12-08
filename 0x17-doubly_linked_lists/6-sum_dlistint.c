#include "lists.h"
/**
 * sum_dlistint - sums all the elements of the node
 *
 * @head: the head node
 * Return: the sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
