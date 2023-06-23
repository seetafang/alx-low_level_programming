#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 *        If n is 0, the function simply prints a new line.
 *        If n is 1 or more, the function prints n strings separated by the separator.
 *        If separator is NULL, it is not printed.
 *        If a string is NULL, (nil) is printed instead.
 *        The strings are provided as variable arguments.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;         /* Variable argument list */
	char *str;            /* Current string */
	unsigned int k;       /* Loop counter */

	va_start(args, n);    /* Initialize variable arguments */

	for (k = 0; k < n; k++)
	{
		str = va_arg(args, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		/* Print the separator if it's not NULL and not the last string */
		if (separator != NULL && k < n - 1)
			printf("%s", separator);
	}

	printf("\n");         /* Print a new line */

	va_end(args);         /* Clean up variable arguments */
}
