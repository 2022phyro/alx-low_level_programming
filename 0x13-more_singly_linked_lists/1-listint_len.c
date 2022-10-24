#include <stdio.h>
#include "lists.h"
/**
 * listint_len - returns the lenght of a linked list
 *
 * @h: the head o fthe list
 * Return: the lenght
 */
size_t listint_len(const listint_t *h)
{
	if (h == NULL)
		return (0);
	return (1 + listint_len(h->next));
}
