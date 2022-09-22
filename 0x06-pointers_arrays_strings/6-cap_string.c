#include <stdio.h>
#include "main.h"
/**
 * *cap_string - Changes all words to uppercase
 * @s: The string whose case is to be changed
 * Return: 's' if successful
 * Description:'A function'
 */
char *cap_string(char *s)
{
	int count, i;
	int sep_words[] = {32, 9, 1, 44, 59, 46, 33, 63, 34, 40, 123, 125};

	count = 0;

	if (*(s + count) >= 97 && *(s + count) <= 122)
		*(s + count) = *(s + count) - 32;
	count++;
	while (*(s + count) != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*(s + count) == sep_words[i])
			{
				if ((*(s + (count + 1)) >= 97) && (*(s + (count + 1)) <= 12))
					*(s + (count + 1)) = *(s + (count + 1)) - 32;
				break;
			}
		}
		count++;
	}
	return (s);
}
