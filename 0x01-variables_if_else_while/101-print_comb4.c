#include <stdio.h>
#include <stdlib.h>
/**
 * main - This is where all our codes are written
 * Description:'Prints all possible combinations of two digits'
 * Return: 0 if successful else a non zero value
 */
int main(void)
{
	int i, j, k;

	for (i = 48; i < 56; i++)
	{
		for (j = i + 1; j <= 56; j++)
		{
			for (k = j + 1; k <= 57; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
			if (i == 55 && j == 56 && k == 57)
				continue;
			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
