#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
 * read_textfile - reads from a file
 *
 * @filename: the name of the file
 * @letters: the size of the bytes to be read
 * Return: the number of bytes or -1 if failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t n, j;
	size_t i;

	buffer = malloc(sizeof(char) * letters);
	i = 0;
	if (buffer == NULL)
		return (0);
	if (filename == NULL)
		return (0);
	n = open(filename, O_RDONLY, 600);
	if (n == -1)
		return (0);
	j = read(n, buffer, letters);
	if (j == -1)
		return (0);
	close(n);

	while (buffer[i] != '\0')
	{
		if (write(1, &buffer[i], 1) == -1)
			return (0);
		i++;
	}
	free(buffer);
	return (i);

}
