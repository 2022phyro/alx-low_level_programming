#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - it generates random passwords for the program 101-crackme
 * Description:'A program'
 * Return: 0 if successful, else a non zero value
 */
int main(void)
{
	int pass[100];
	int a, sum, n;

	sum = 0;

	srand(time(NULL));

	for (a = 0; a < 100; a++)
	{
		pass[a] = rand() % 78;
		sum += (pass[a] + '0');
		putchar(pass[a] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
	}
	return (0);
}
