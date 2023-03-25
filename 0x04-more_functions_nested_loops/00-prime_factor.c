#include  "main.h"
#include  <stdio.h>

/**
 * main - prints the largest prim factor of 612852475143
 * Return: always 0
 */

int main(void)
{
	unsigned long int i, n = 612852475143;

	for (i = 3; i < 782849; i = i + 2)
	{
		while ((n % i == 0) && (n !=  i))
			n = n / i;
	}
			printf("%ln\n", n);
			return (0);
}

