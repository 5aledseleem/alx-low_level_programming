#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - Prints the result of simple operations.
 * @argc: num of argts
 * @argv: An arr of ptrs
 *
 * Return: Always 0.
*/

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int k, s;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	k = atoi(argv[1]);
	op = argv[2];
	s = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' && s == 0) ||
	    (*op == '%' && s == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op)(k, s));

	return (0);
}

