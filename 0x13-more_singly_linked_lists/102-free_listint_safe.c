#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint_safe - frees a list
 *
 * @h: the list to be freed
 * Return: the number of freed nodes
 */
size_t free_listint_safe(listint_t **h)
{i
	listint_t *temp;
	size_t n ;

	n = 1;
	while ((*h) != NULL)
	{
		temp = (*h)->next;
		free((*h)-_>n);
		free((*h));
		(*h) = temp;
		n++;
	}
	(*h) = NULL;
	return (n);
}
