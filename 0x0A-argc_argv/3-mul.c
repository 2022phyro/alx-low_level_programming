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
	int i;
	int j;
	int k;

	i = 0;
	j = argv[1];
	k = argv[2];

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		i = k * j;
		printf("%d", i);
	}
	return (0);
}
