#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <unistd.h>
/**
 * func_before_main - prints out sentences before the main function is executed
 *
 * Return: Nothing
 */
void func_before_main(void) __attribute__((constructor));
void func_before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
