#include<stdio.h>
#include<unistd.h>
 /**
  *main - prints exactly a phrase about art
  *Description:'Prints a phrase withot the use of printf  or puts'
  *Return: Return 0 if the program works well else another non-zero file
  */
int main(void)
{
	write(2,
"and that piece of art is useful - Dora Korpar, 2015-10-19\n",  59);
	return (1);
}
