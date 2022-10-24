#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *fast;
	if (head == NULL)
		return (NULL);
	slow = head;
	fast =  (head->next)->next;
	while (slow != NULL)
	{
		slow = slow->next;
		fast = fast->next;
		if (slow == fast)
			break;
	}
	slow = head;
	while (slow != fast)
	{
		slow = slow->next;
		fast = fast->next;
	}
	return (slow);
}
