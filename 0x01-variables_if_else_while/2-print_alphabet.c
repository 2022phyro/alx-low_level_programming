#include <stdio.h>
#include <stdlib.h>
/**
 *main - it is the place where the program is  written
 *Description:'Print out all the lowecase alphabet'
 *Return: 0 if properly executed else return a non zero value
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
