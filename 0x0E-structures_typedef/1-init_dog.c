#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initializes Variable of type struct dog
 * @d: Pointer to sTruct dog to initialize
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
