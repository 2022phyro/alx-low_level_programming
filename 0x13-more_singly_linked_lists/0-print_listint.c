#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * print_listint - prints a linked lists of integers
 *
 * @h: the list to be printed
 * Return: the number of elements in the list
 */
size_t print_listint(const listint_t *h)
{
	if (h == NULL)
		return (0);
	printf("%d\n", h->n);
	return (1 + (print_listint(h->next)));
}
