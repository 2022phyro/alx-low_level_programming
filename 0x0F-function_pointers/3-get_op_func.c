#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-main.h"
/**
 * get_op_func - gets the right function
 *
 * @s: the operator
 * Return: a fucntion to the right function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (i < 5)
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);
		i++;
	}
	return (ops[5].f);
}