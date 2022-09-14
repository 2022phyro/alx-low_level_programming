#include <stdio.h>
/**
 * main - print fibonacci sequence
 * Description:'a program to print fibonacci series'
 * Return: nothing
 */
int main(void)
{
	int count;
	long int a = 1;
	long int b = a + 1;
	long int c = a + b;

	printf("%ld, %ld, ", a, b);
	while (count < 48)
	{
		printf("%ld", c);
		count++;
		a = b;
		b = c;
		c = a + b;
		if (count < 48)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
