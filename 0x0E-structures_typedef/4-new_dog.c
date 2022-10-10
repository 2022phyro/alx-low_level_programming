#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * *_strcpy - copies the string pointed to by src
 * @dest: the destination for the copied string
 * @src: the string to be copied
 * Return: Nothing
 * Description:'A function'
 */
char *_strcpy(char *dest, char *src)
{
	int a, b;

	a = 0;

	while (src[a] != '\0')
	{
		a++;
	}
	for (b = 0; b < a; b++)
	{
		dest[b] = src[b];
	}
	dest[b] = '\0';

	return (dest);
}
/**
 * _strlen - returns the lenght of a string
 *
 * @s: the string in question
 * Return: the string lenght
 */
int _strlen(char *s)
{
	int k;

	for (k = 0; *(s + k) != '\0'; k++)
		;
	return (k);
}
/**
 * new_dog - Creates a new dog
 * @name: The name of the dog
 * @age: Dog's age
 * @owner: the dog's owner
 *
 * Return: a pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *man;

	if (name == NULL || age <= 0 || owner == NULL)
		return (NULL);
	man = malloc(sizeof(dog_t));

	if (man == NULL)
		return (NULL);
	man->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (man->name == NULL)
	{
		free(man);
		return (NULL);
	}
	man->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (man->owner == NULL)
	{
		free(man->name);
		free(man);
		return (NULL);
	}

	man->name = _strcpy(man->name, name);
	man->age = age;
	man->owner = _strcpy(man->owner, owner);
	return (man);
}
