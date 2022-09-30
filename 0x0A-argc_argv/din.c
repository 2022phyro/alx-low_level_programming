#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
  int count;

  for (count = 0; count < argc; count++)
    ;
  printf("%d\n", count);
    return (0);
}
