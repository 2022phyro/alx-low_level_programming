#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - multiplies two arguments
 *
 * @argc: the number of arguments to the function
 * @argv: the arguments to the functio
 * Return: nothing
 */
int main(int argc, char *argv[])
{
	int i, j, k, l;

	l = argc;
	i = 0;
	j = atoi(argv[1]);
	k = atoi(argv[2]);

	if (l + 1 == 2)
	{
		printf("Error\n");
		return (1);
	}
	if (l == 3)
	{
		i = k * j;
		printf("%d\n", i);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
