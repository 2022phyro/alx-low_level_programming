#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - prints out the numbe rof coins need to make change for the argument
 *
 * @argc: the number of arguments to the function
 * @argv: the arguments to the functio
 * Return: nothing
 */
int main(int argc, char *argv[])
{
	int sum, k, flag1, flag2, flag3, flag4, flag5, flag6, flag7, flag8;

	sum = 0;
	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}

	k = atoi(argv[1]);
	flag1 = (k / 25);
	flag2 = (k % 25);
	flag3 = (flag2 / 10);
	flag4 = (flag2 % 10);
	flag5 = (flag4 / 5);
	flag6 = (flag4 % 5);
	flag7 = (flag6 / 2);
	flag8 = (flag6 % 2);
	sum = flag1 + flag3 + flag5 + flag7 + flag8;

	if (k < 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	printf("%d\n", sum);
	return (0);
}
