#include "3-calc.h"
#include <stdlib.h>
#include <string.h>
/**
 * get_op_func - selects the correct function to perform
 * the operation askkked by the user.
 * @s: the operator passed as argument.
 *
 * Return: a pointer to the function corresponding to
 * the operator given as a parameter.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_mul},
		{"%", op_mod},
		{NULL, NULL}
		};
		int i = 0;

		while (i < 5)
		{
			if (strcmp(s, ops[i].op) == 0)
				return (ops[i].f);
			i++;
		}

		return (0);
}
