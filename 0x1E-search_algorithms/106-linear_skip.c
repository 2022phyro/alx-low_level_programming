#include "search_algos.h"
/**
 * linear_skip - Performs a search on alinked list using express lanes
 *
 * @list: the list to search
 * @value: the target
 * Return: a pointer to the indexor NULL if not found
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *temp, *mark;
	size_t i;

	if (list == NULL || list->n > value)
		return (NULL);
	temp = list;
	mark = list;
	while (temp != NULL)
	{
		if (temp->express && temp->express->n >= value)
		{
			printf("Value checked at index [%d]", temp->express->index);
			printf(" = [%d]\n", temp->express->n);
			printf("Value found between indexes [%d]", temp->index);
			printf(" and [%d]\n", temp->express->index);
			i = temp->express->index;
			break;
		}
		if (temp->express == NULL)
		{
			mark = temp;
			while (mark->next)
				mark = mark->next;
			printf("Value found between indexes [%d]", temp->index);
			printf(" and [%d]\n", mark->index);
			i = mark->index;
			break;
		}
		temp = temp->express;
		printf("Value checked at index [%d]", temp->index);
		printf(" = [%d]\n", temp->n);
	}
	while (temp)
	{
		printf("Value checked at index [%d] ", temp->index);
		printf("= [%d]\n", temp->n);
		if (temp->n == value)
			return temp;
		if (temp->index == i)
			return (NULL);
		temp = temp->next;
	}
	return (NULL);
}
