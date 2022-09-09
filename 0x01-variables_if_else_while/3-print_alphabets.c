#include <stdio.h>
#include <stdlib.h>
/**
 *main - this is where we write our program
 *Description:'This prints out all the letters in upper and lower case'
 *Return: if accurate else a non zero value
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
