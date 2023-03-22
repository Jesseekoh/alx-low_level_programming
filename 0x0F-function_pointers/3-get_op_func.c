#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
  * get_op_func - selects the correct function to perform the operation asked
  * by the user
  * @s: operator
  * Return: pointer to corresponding function
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

	while (i < 5)
	{
		if (*(ops[i].op) == *s && s[0] != '\0')
			return (ops[i].f);
		i++;
	}
	i = 0;
	return (0);
}
