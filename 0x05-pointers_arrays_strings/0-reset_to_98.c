#include <stdio.h>
#include <main.h>
/**
 * reset_to_98 - it changes the number in the variable to 98
 * Descritpion:'A function'
 * Return: Nothing
 * @*n: the variable to be changed
 */
void reset_to_98(int *n)
{
	int *p;
	p = &n;
	*p = 98;
	return (p);
}
