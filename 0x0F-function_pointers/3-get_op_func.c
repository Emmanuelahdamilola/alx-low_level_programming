#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - function that selects the correct function to
 * perform the operation asked by the user.
 * You’re not allowed to declare any other function.
 * @s: string argument
 * Return: If s does not match any of the 5 expected operators
 * (+, -, *, /, %), return NULL
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
	int i = 0;

	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;
	return (ops[i].f);
}
