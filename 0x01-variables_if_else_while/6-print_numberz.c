#include <stdio.h>
/**
 *main - it ia where the code is written
 *Description:'It prints out all single digit numbers'
 *Return: 0 if executed properly else a non zero value
 */
int main(void)
{
	int num;

	for (num = 48; num < 58; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
