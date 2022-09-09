#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - it is where the the program is written
 *Description:'uses an if statement to return the status of  random number'
 *Return: 0 if accurate else a non zero value
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
