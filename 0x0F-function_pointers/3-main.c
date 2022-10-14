#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-main.h"
/**
 * main - a basic calculator
 *
 * @argc: the number of arguments
 * @argv: the arguments
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	int a, b, c, d;
	int (*func)(int, int) = get_op_func(*(argv + 2));

	b = argv[2][0];
	d = argv[2][1];


	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (d != '\0' || func == NULL)
	{
		printf("Error\n");
		exit(99);

	}
	a = atoi(*(argv + 1));
	c = atoi(*(argv + 3));
	if ((b == '/' && c == 0) || (b == '%' && c == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", func(a, c));
	return (0);
}
