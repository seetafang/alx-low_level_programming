#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an Array of integers
 * @min: minimum range of the values stored
 * @max: maximum range of values stored / number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int f;
	int size;

	if (min > max)
		return NULL;

	size = max - min + 1;

	ptr = (int *)malloc(sizeof(int) * size);

	if (ptr == NULL)
		return NULL;

	for (f = 0; min <= max; f++)
	{
		ptr[f] = min;
		min++;
	}

	return ptr;
}
