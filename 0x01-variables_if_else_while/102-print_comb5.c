#include <stdio.h>
#include <stdlib.h>
/**
 * main - This is where our code is stored
 * Description:'Prints all possible combinations of two numbers'
 * Return: 0 if accurate else a non zero value
 */
int main(void)
{
	int i, j;

	for (i = '0'; i < 100; i++)
	{
		for (j = '0'; j < 100; j++)
		{
			putchar(i / 10 + '0');
			putchar(i % 10 + '0');
			putchar(' ');
			putchar(j / 10 + '0');
			putchar(j % 10 + '0');
			if (!(i == 98 && j == 99))
				putchar(',');
				putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
