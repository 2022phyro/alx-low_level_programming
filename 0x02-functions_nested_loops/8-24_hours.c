#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - prints out all the minutes of the day
 * Return: 0 if successful
 * @void: data type of the values being printed out
 */
void jack_bauer(void)
{
	int t, u;

		for (t = 0; t < 24; t++)
		{
			for (u = 0; u < 60; u++)
			{
				_putchar(t / 10 + '0');
				_putchar(t % 10 + '0');
				_putchar(':');
				_putchar(u / 10 + '0');
				_putchar(u % 10 + '0');
				_putchar('\n');
			}
			if (t == 23 && u == 59)
				continue;
		}
}
