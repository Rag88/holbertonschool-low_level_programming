#include "3-calc.h"

/**
 * get_op_func - function that selects the correct function to
 * perform the operation asked by the user
 * @s: operation given (+, -, *, /, %)
 * Return: pointer to correct operation function (0-4)
 */

int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (i < 5)
	{
		if (*s == *ops[i].op && s[1] == 0)
			return (ops[i].f);
		i++;
	}
	printf("Error\n");
	exit(99);
}
