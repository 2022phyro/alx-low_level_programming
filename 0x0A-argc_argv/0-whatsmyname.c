#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - this prints out the name of the file
 *
 * @argv: the arguments to the function
 * @argc: the numner of arguments
 * Return: nothing
 */
int main(int argc _attribute_((unused)), char *argv[])
{
	puts(argv[0]);
	return (0);
}
