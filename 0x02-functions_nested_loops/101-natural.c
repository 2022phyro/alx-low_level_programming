#include <stdio.h>
/**
 * main - Pritns all natural numbers below 1024
 * Description:'Prints the multiples of 3 and 5'
 * Return: 0 if correct
 */
int main(void)
{
	int num1;

	for (num1 = 0; num1 < 1024; num1++)
	{
		if ((num1 % 3 == 0) || (num1 % 5 == 0))
		{
			printf("%d", num1);
			if (num1 < 1023)
				printf(", ");
		}
	}
	printf("\n");
	return (0);
}
