
#include <unistd.h>
#include <stdio.h>
/**
 * main - a header file
 * Description ?
 * Return: 
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
