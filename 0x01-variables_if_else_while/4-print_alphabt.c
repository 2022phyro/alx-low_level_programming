#include <stdio.h>
#include <stdlib.h>
/**
 * main - Only the codes written inside it will be executed
 * Description:'Prints out the letters of the alphabet except q and e'
 * Return: 0 if correct else a non zero value
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
