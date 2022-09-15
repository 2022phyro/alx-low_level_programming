#include <stdio.h>
/**
 * main - prints 1 - 100 and zizz and buzz and fizz buzz
 * Description:'Fizz for multiples of 3, Buzz for 5 and fizzbuzz for 15'
 * Return: 0 if accurate
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if ((a % 15 == 0))
			printf("FizzBuzz");
		else if (a % 3 == 0)
			printf("Fizz");
		else if (a % 5 == 0)
			printf("Buzz");
		else
			printf("%d", a);
		if (!(a == 100))
			printf(" ");
	}
	printf("\n");
	return (0);
}
