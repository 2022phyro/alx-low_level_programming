#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - this prints out the name of the file
 *
 * @argc: the number of arguments to the function
 * @argv: the arguments to the functio
 * Return: nothing
 */
int main(int argc, char *argv[])
{
	_puts(argv[0]);
	putchar('\n');
	return (0);
}
