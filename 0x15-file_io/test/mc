#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
 * _strlen - gives the lenghtof a string
 *
 * @s: the string to find its lenght
 * Return: string lenght
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
 * append_text_to_file - appends text to the end of file
 *
 * @filename: the name of the file
 * @text_content: the content to be appended
 * Return: 1 if success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int n, j, l;

	l = _strlen(text_content);
	if (filename == NULL)
		return (-1);

	n = open(filename, O_APPEND | O_WRONLY);
	if (n == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		;
	}
	else
	{
		j = write(n, text_content, l);
		if (j == -1)
		return (-1);
	}
	close(n);
	return (1);


}
