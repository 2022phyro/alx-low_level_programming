#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
 * _strlen - returns the lenght of a string
 *
 * @s: the string to be checked
 * Return: the lenght of the string
 */
int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		;
	}
	return (i);
}
/**
 * create_file - creates a new file
 *
 * @filename: the name of the file to be created
 * @text_content: the contents of the new file
 * Return: 1 if successful
 */
int create_file(const char *filename, char *text_content)
{
	int n, j, l;

	l = _strlen(text_content);

	n = open(filename, O_RDWR);
	if (n != -1)
	{
		j = write(n, text_content, l);
	}
	if (j == -1)
	{
		return (-1);
	}
	n = open(filename, O_CREAT | O_RDWR, 0600);
	if (n == -1)
		return (-1);
	j = write(n, text_content, l);
	if (j == -1)
		return (-1);
	write(n, (void *)EOF, 1);

	close(n);
	return (1);
}
