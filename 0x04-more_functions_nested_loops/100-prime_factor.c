#include <stdio.h>
#include <math.h>
/**
 * main - prints the largest prime factor of a number
 * Description:'A program to find the largest prime factor of a given integer'
 * Return: 0 if accurate
 */
int main(void)
{
	unsigned int max, i, a = 612852475143;

	while(a % 2 == 0)
	{
		max = 2;
		a = a / 2;
	}
	for (i = 3; i <= sqrt(a); i = i + 2)
	{
		while (a % i == 0)
		{
			max = i;
			a = a / i;
		}
	}
	if (a > 2)
	{
		max = n;
	}
	printf("%d", max);
	return (0);
}
