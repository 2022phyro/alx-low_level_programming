#include <stdio.h>
/**
 * main - it ia where the code is written
 * Description:'It prints out all single digit numbers'
 * Return: 0 if executed properly else a non zero value
 */
int main(void)
{
	int num;

	num = 0;

	for (num = 0; num < 10; num++)
	printf("%d", num);
	putchar('\n');
	return (0);
}
