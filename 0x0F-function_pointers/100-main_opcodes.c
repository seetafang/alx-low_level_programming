#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of its own main function.
 * @argc: The no of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success, 1 if the no. of arguments is incorrect,
 *         2 if the no. of bytes is negative.
 */
int main(int argc, char *argv[])
{
	int i, num_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		return 1;
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return 2;
	}

	unsigned char *opcode = (unsigned char *)main;

	for (i = 0; i < num_bytes; i++)
		printf("%02x ", opcode[i]);

	printf("\n");

	return 0;
}
