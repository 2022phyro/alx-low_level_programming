#include <stdio.h>
#include <stdlib.h>
/**
 * main - this is where our code will be written
 * Description:'Print all possible combinations of singke digits'
 * Return: 0 if successful else a nin zero value
 */
int main(void)
{
	int ch;

	for (ch = 48; ch <= 57; ch++)
	{
		putchar(ch);
		if (ch !=  57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
