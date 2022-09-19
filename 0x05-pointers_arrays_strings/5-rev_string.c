#include <stdio.h>
#include "main.h"
/**
 * rev_string - reverses the string
 * Description:'A function'
 * @s: the string to be checked
 * Return: nothing
 */
void rev_string(char *s)
{
	int i, j, k;
	char ch;

	j = 0;

	for (i = 0; s[i] != '\0'; i++)
		;
	j = i - 1;

	for (k = 0; k < i / 2; k++)
	{
		ch = s[k];
		s[k] = s[j];
		s[j--] = ch;
	}
}
