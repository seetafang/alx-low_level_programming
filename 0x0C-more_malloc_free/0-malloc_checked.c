#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Allocates memory using Malloc
 * @b: Number of bytes to allocate
 *
 * Return: A pointer to the allocated memory
 * If malloc fails- the program terminates with a status value of 98
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b); /* Allocate memory using malloc*/
    
 if (ptr == NULL) {
        exit(98); /* If malloc fails, terminate the program with status value 98*/
    }

    return ptr; /* Return the allocated memory pointer */
}
