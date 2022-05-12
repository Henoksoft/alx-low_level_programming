#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
 * get_op_func - function that selects the corrct math function operation
 * asked by the user
 * @s: Char pointer for function specified by user
 *
 * Return: Function pointer for correct function to be used, NULL if operation
 * is not found
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{ "+", op_add },
		{ "-", op_sub },
		{ "*", op_mul },
		{ "/", op_div },
		{ "%", op_mod },j
		{ NULL, NULL }
	};
	int i = 0;

	while (op[i].op)
	{
		if (s[0] == ops[i].op[0] && s[1] == '\0')
			return (ops[i].f);

		i++;
	}

	printf("Error\n");
	exit(99);
}
