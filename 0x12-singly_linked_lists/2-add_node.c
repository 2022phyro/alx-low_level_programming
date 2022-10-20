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
 * *add_node - prints all the elements of the linked list
 *
 * @head: a pointer to the head of the linked list
 * @str: the string to be stored in the new head
 * Return: a pointer to the next node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_head;

	new_head = (list_t *)(malloc(sizeof(list_t)));
	if (new_head == NULL)
		return (NULL);
	new_head->str = strdup(str);
	new_head->len = _strlen(str);
	new_head->next = (*head);
	(*head) = new_head;
	return ((*head));
}
