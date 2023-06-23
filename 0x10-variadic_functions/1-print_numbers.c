#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 *        If n is 0, the function simply prints a new line.
 *        If n is 1 or more, the function prints n numbers separated by the separator.
 *        If separator is NULL, it is not printed.
 *        The numbers are provided as variable arguments.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;         /* Variable argument list */
	unsigned int k;       /* Loop counter */

	va_start(args, n);    /* Initialize variable arguments */

	for (k = 0; k < n; k++)
	{
		printf("%d", va_arg(args, int));   /* Print the current number */

		/* Print the separator if it's not NULL and not the last number */
		if (separator != NULL && k < n - 1)
			printf("%s", separator);
	}

	printf("\n");         /* Print a new line */

	va_end(args);         /* Clean up variable arguments */
}
