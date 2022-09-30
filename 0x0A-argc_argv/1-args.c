#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - this prints out the number of arguments to the program
 *
 * @argc: the number of arguments to the function
 * @argv: the arguments
 * Return: nothing
 */
int main(int argc, char *argv[])
{
	(void)argv;

	if (argc > 1)
		printf("%d\n", argc - 1);
	else
		printf("%d\n", 0);
	return (0);
}
