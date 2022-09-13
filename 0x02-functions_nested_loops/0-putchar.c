#include <stdio.h>
#include "main.h"
/**
 * main - prints putchar
 * Description:'Prints putchar'
 * Return: 0 if correct
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
int main(void)
{
	int a, b, c, d, e, f, g,  h, i;
		a = _putchar('_');
		b = _putchar('p');
		c = _putchar('u');
		d = _putchar('t');
		e = _putchar('c');
		f = _putchar('h');
		g = _putchar('a');
		h = _putchar('r');
		i = _putchar('\n');
return (0);
}
