#include <stdio.h>
#include <stdlib.h>
/**
 * main - This is where all our codes are written
 * Description:'Prints all possible combinations of two digits'
 * Return: 0 if successful else a non zero value
 */
int main(void)
{
	int i, j;

	for (i = 48; i < 57; i++)
	{
		for (j = i + 1; j <= 57; j++)
		{
			putchar(i);
			putchar(j);
			if (i == 56 && j == 57)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
