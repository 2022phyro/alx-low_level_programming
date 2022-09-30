#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main.h - prints out the name of the file
 *
 * Return: Nothing
 */

void _puts(char *s)
{
    //prints a string
  if (*(s) == '\0')
  {
      return;
  }
        putchar(*(s));
  _puts(s+1);

}
int main(int argc, char *argv[])
{
  _puts(argv[0]);
  printf("\n");
  return (0);
}
