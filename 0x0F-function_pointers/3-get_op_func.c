#include "3-calc.h"

/**
 * get_op_func - Returns a pointer to the function that
 * corresponds to the operator given as a parameter
 * @s: operator
 *
 * Return: pointer to function
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

	while (ops[i].op != NULL && strcmp(s, ops[i].op) != 0)
	{
		i++;
	}
	return (ops[i].f);
}

