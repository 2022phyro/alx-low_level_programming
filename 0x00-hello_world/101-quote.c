#include <unistd.h>

/**
*main - makes use of a new header file
*Description:'Prints a phrase without using printf or puts'
*Return: 1 if successfully executed else another value
*/
int main(void)
{
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}
