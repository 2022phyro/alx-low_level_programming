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
	int i, sum, k;

	i = 1;
	sum = 0;
	
	while (i < argc)
	{
		k = atoi(argv[i]);
		if (argv[i] != 0 && k == 0)
		{
			printf("%s\n", "Error");
			return (1);
		}
		sum = sum + k;
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
