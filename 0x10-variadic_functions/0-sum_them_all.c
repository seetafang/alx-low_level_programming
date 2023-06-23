#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: The number of parameters.
 * @...: The variable number of parameters.
 *
 *  Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;    /* Variable argument list */
	int sum = 0;
	unsigned int k;  /* Loop counter */

	if (n == 0)
	return 0;

	va_start(args, n);  /* Initialize va_list */

	for (k = 0; k < n; k++)
	{
	sum += va_arg(args, int);  /* Access next argument */
	}

	va_end(args);  /* Clean up va_list */

	return sum;
}
