#include "lists.h"
/**
 * dlistint_len - returns the number of elements in the linked list
 * @h: the head node
 * Return: the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	i = 0;
	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
