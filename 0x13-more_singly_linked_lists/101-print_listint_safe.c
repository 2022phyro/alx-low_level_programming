#include <stdio.h>
#include "lists.h"
size_t print_listint_safe(const listint_t *head)
{
	if (head == NULL)
		return (0);
	printf("[%x] %d", &(head->n), head->n);
	return (1 + (print_listint_safe(head->next)));
}
