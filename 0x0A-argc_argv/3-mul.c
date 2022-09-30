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
	int i, j, k;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}

	i = 0;
	j = atoi(argv[1]);
	k = atoi(argv[2]);
	i = k * j;
	printf("%d\n", i);
	return (0);
}
