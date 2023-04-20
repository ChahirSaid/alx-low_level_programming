#include "3-calc.h"

/**
 * get_op_func - function pointer to compute given an op
 * @s: the operator given
 * Return: pointer to the function that corresponds to the operator.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{0, 0}
	};
	int i = 0;

	while (ops[i].op != 0 && *(ops[i].op) != *s)
		i++;

	return (ops[i].f);
