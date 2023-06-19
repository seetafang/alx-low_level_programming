#include <stdlib.h>
#include "main.h"

/**
 * _memset - fills memory with  constant byte
 * @s: memory area to be filled
 * @b: char to copy
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
    char *ptr = s;
    while (n > 0) {
        *ptr++ = b;
        n--;
    }
    return s;
}

/**
 * _calloc - allocates memory for  array
 * @nmemb: number of elements in  array
 * @size: elemnt size
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
        	return NULL;
	ptr = malloc(nmemb * size);
    if (ptr == NULL)
        return NULL;

    _memset(ptr, 0, nmemb * size);

    return ptr;
}
