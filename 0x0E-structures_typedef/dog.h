#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog's  Infoformation
 * @name: First 
 * @age: Second 
 * @owner: Third 
 *
 * Description: Longer description
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
