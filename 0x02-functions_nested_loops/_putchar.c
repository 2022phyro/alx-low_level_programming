#include <stdio.h>
#include <unistd.h
/**
 * _putchar - prints out a character
 * Return: 0 if success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
