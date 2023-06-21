#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    int nameLength, ownerLength;
    dog_t *newDog;

    if (name == NULL || owner == NULL)
        return NULL;

    nameLength = strlen(name);
    ownerLength = strlen(owner);

    newDog = (dog_t *)malloc(sizeof(dog_t));
    if (newDog == NULL)
        return NULL;

    newDog->name = (char *)malloc((nameLength + 1) * sizeof(char));
    if (newDog->name == NULL) {
        free(newDog);
        return NULL;
    }

    newDog->owner = (char *)malloc((ownerLength + 1) * sizeof(char));
    if (newDog->owner == NULL) {
        free(newDog->name);
        free(newDog);
        return NULL;
    }

    strncpy(newDog->name, name, nameLength);
    newDog->name[nameLength] = '\0';
    strncpy(newDog->owner, owner, ownerLength);
    newDog->owner[ownerLength] = '\0';

    newDog->age = age;

    return newDog;
}
