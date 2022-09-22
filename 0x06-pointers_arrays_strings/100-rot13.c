#include <stdio.h>
#include "main.h"
/**
 * rot13 - encodes a string with rot13 format
 * Return: 's'if successful
 * Description:'A function'
 * @s: the character to be encoded
 */
char *rot13(char *s)
{
	int count = 0, i;
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + count) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(s + count) == alpha[1])
			{
				*(s + count) = rot13[i];
					break;
			}
		}
		count++;
	}
	return (s);
}
