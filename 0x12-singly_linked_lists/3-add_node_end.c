#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * _strlen - returns the lenght of the string
 *
 * @s: the string to be returned
 * Return: the number of chars in it
 */
unsigned int _strlen(const char *s)
{
	unsigned int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * *add_node_end - adds new nodes to the end of the linked list
 *
 * @head: a pointer to the head of the linked list
 * @str: the string to be stored in the new head
 * Return: a pointer to the next node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *dup;
	list_t *end;

	dup = (*head);
	end = (list_t *)(malloc(sizeof(list_t)));
	if (end == NULL)
		return (NULL);

	end->len = _strlen(str);
	end->str = strdup(str);
	end->next = NULL;

	if ((*head) == NULL)
	{
		(*head) = end;
		return ((*head));
	}
	while (dup->next != NULL)
	{
		dup = dup->next;
	}
	dup->next = end;
	return ((*head));
}
