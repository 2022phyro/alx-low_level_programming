#include <stdio.h>
#include "lists.h"
/**
 * *detect - detects the presence of a linked list
 *
 * @h: the head node
 * Return: a node where the tortoise meets the hare
 */
const listint_t *detect(const listint_t *h)
{
	const listint_t *S, *F;

	S = h;
	F = h;

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
 * *find_listint - finds the loop
 *
 * @head: the head node
 * Return: the start of the loop;
 */
const listint_t *find_listint(const listint_t *head)
{
	const listint_t *mark;

	mark = detect(head);

	if (mark == NULL)
	return (NULL);
	while (head != mark)
	{
		head = head->next;
		mark = mark->next;
	}
	return (head);
}
/**
 * print_listint_safe - prints alist
 *
 * @head: the head of the list
 * Return: the nuber of nodes printed;
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *mark;
	size_t flag, n;

	if (head == NULL)
		return (0);
	flag = 0;
	n = 0;
	mark = find_listint(head);
	if (mark == NULL)
	{
		while (head != NULL)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			n++;
		}
		return (n);
	}

	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		n++;
		if (head == mark)
		{
			flag++;
		}
		if (flag == 2)
		{
			break;
		}
	}
	printf("-> [%p] %d", (void *)mark, mark->n);
	return (n);
}

