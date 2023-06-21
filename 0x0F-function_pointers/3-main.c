#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - Prints result of simple operations.
 * @argc: The number of arguments supplied to program.
 * @argv: An array of pointers to  arguments.
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int num1, num2, result;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);

	result = 0;
	if (*op == '+')
		result = op_add(num1, num2);
	else if (*op == '-')
		result = op_sub(num1, num2);
	else if (*op == '*')
		result = op_mul(num1, num2);
	else if (*op == '/')
		result = op_div(num1, num2);
	else if (*op == '%')
		result = op_mod(num1, num2);
	else
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", result);

	return (0);
}
