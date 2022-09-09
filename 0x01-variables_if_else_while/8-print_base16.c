#include <stdio.h>
#include <stdlib.h>
/**
 * main - this fucntion holds all our executable codes
 * Description:'Print out all numbers in hexadecimal form'
 * Return: 0 if accurate else a non zero value
 */
int main(void)
{
	int ch;
	int n;

	for (ch = 48; ch < 58; ch++)
	{
		putchar(ch);
	}
	for (n = 'a'; n <= 'f'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}

