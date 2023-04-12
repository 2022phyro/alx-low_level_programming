#include "search_algos.h"
#include <math.h>
/**
 * jump_list - Uses jump search to search a linked list
 *
 * @list: the list to be sorted
 * @size: the array lenght
 * @value: the value to be checked
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t bloc, i;
	listint_t *temp, *mark;
	if (list == NULL || size == 0)
		return (NULL);
	bloc = sqrt(size);
	i = bloc;
	temp = list;
	mark = list;
	while (true)
	{
		while (temp->index != i)
			temp = temp->next;
		printf("Value checked array[%d] ", i);
		printf("= [%d]\n", temp->n);
		if (temp->n >= value || (i + bloc >= size))
		{
			printf("Value found between indexes [%d] ", mark->index);
			printf("and [%d]\n", temp->index);
			break;
		}
		i += bloc;
		mark = temp;
	}
	temp = mark;
	while (temp != NULL) 
	{
		printf("Value checked array[%d] = [%d]\n", temp->index, temp->n);
		if (temp->n == value)
			return (temp);
		temp = temp->next;
	}
	return (NULL);

}
