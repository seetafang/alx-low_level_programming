#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - print name using pointer to function
 * @name: string to add
 * @f: pointer to function
 * Return: nothing
 **/
void print_name(char *name, void (*f)(char *))
{
    /* Check for NULL Pointers Or Empty Name */
	if (name == NULL || f == NULL || *name == '\0')
		return;

    /* Call The Function Pointer With The Name As An Argument */
	(*f)(name);
}
