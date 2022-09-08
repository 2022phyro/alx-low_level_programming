#include <stdio.h>
/**
 * This prints out the size of each data type we use
 * main - uses printf and aizeof to give our result
 * Return:0 if executed properly else a non zero value
 */
 int main(void)
{
printf("Size of a char: %d byte(s)\n", sizeof(char));
printf("Size of an int: %d byte(s)\n", sizeof(int))
printf("Size of a long int: %d byte(s)\n", sizeof(long int));
printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
printf("Size of a double: %d byte(s)\n", sizeof(double));
return (0);
}
