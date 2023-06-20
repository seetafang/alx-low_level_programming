#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints  struct dog
 * @d: struct dog to print
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	d->name = (d->name != NULL) ? d->name : "(nil)";
	d->owner = (d->owner != NULL) ? d->owner : "(nil)";

	printf("Name: %s\nAge: %.1f\nOwner: %s\n", d->name, d->age, d->owner);
}
