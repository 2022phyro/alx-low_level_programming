#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * *detect - detects the presence of a loop
 *
 * @h: the head node of the loop
 * Return: a pointer to the loop
 */
listint_t *detect(listint_t *h)
{
	listint_t *S, *F;

	while (S && F && F->next)
	{
		S = S->next;
		F = F->next->next;
		if (F == S)
			return (F);
	}
	return (NULL);
}
/**
 * *find_listint_loop - finds the loop
 *
 * @head: the head node
 * Return: the start of the loop;
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *mark;
	listint_t *temp;

	mark = detect(head);
	temp = head;

	if (mark == NULL)
		return (NULL);
	while (temp != mark)
	{
		temp = temp->next;
		mark = mark->next;
	}
	return (temp);
}
