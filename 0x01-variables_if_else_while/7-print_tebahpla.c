#include <stdio.h>
#include <stdlib.h>
/**
 * main - this is where the program will be written
 * Description:'Print the alphabets in reverse order'
 * Return: 0 if properly executed else a non zero value
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar (ch);
	}
	putchar('\n');
	return (0);
}
