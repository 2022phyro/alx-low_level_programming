#include "lists.h"
/**
 * print_dlistint - prints out a double list
 * 
 * @h: the head_node
 * Return: the number of nodes printed
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	i = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
