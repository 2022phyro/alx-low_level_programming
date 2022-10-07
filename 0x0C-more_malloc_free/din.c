#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * *buffer: creates a buffer
 *
 * @n: the size of buffer to be created
 * Return: a pointer to the buffer
 */
void *buffer(int n);
{
	void *ptr;
	ptr= malloc(sizeof(int) * n);
	if (ptr == NULL)
	{
		printf("Error\n");
		exit(98);
	}
	return (ptr);
}
/**
 * toint - changesa char to int
 *
 * @s the char to be converted
 * Return: the new character
 */
int toint(char *s)
{
	int n;
	n = (s - 48);
	return (n);
}
/**
 * atoicheck - checks if the string is composed entirely of digits
 *
 * @s: the string
 * Returns: 1 if successful;
 */
int atoicheck(char *s)
{
	int k, l;

	k = 0;
	
	while (k < _strlen(s))
	{
		if (!(*(s + k) >= 48 && *(s + k) <= 57))
		{
			printf("Error\n");
			exit(98);
		}
		l = 0;
		k++;
	}
	return (l);
}

/**
 * main - a program to multiply two numbers
 *
 * @argc: the number of arguments
 * @argv: the array of arguments
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	int i, j, k, l;
	int *ans;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	atoicheck(argv[1]);
	atoicheck(argv[2]);

	i = _strlen(argv[1]);
	j = _strlen(argv[2]);
	l = i + j;
	ans = _calloc(l, sizeof(int));
	

	 
	



}
