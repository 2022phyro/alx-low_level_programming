#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - adds all the arguments and print Error if the arg is not a number
 *
 * @argc: the number of arguments to the function
 * @argv: the arguments to the functio
 * Return: nothing
 */
int main(int argc, char *argv[])
{
	int i, sum, j, k;

	i = 1;
	sum = 0;

	while (i < argc)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!(argv[i][j] >= '0' && argv[i][j] <= '9'))
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
		k = atoi(argv[i]);
		sum = sum + k;
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
