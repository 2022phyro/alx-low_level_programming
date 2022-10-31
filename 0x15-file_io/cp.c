#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
 * main - program to mimick cp function in linux terminal
 *
 * @argc: the number of command line arguments
 * @argv: the argument names
 * Return: 0, success
 */
int main(int argc, char **argv)
{
	int n;
	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	n = open(argv[1], O_RDONLY);
	if (n == -1)
	{
		dprintf(2, " Can't read from file ""NAME_OF_THE_FILE\n");
		exit(98);

	}

}
