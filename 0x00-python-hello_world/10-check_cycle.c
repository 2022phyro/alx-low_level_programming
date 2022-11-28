#include "lists.h"
/**
 * check_cycle - checks if a list has a loop in it
 *
 * @list: the head of the list
 * Return: 1 if there is a loop or 0 if there is none
 */
int check_cycle(listint_t *list)
{
	listint_t *tort, *hare;
	listint_t *mark = (listint_t *)(malloc(sizeof(listint_t)));

	if (mark == NULL)
	{
		free(mark);
		return (0);
	}


	if (list == NULL || list->next == NULL)
		return (0);
	mark == (list->next)->next
	tort = list;
	hare = list->next;
	for (; hare && tort; hare = hare->next, tort = tort->nextmark)
	{
		if (mark == tort and mark == hare)
			return (1);
		mark = mark->next;
	}
	return (0);

}
