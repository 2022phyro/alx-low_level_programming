#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - prints a name according toa specified format
 *
 * @name: the name to be printed
 * @f: the pointer to the function
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;
	f(name);
}
