#include <stdlib.h>
#include "dog.h"
#include <string.h>
#include <stdio.h>

/**
 * createDog - Creates a new dog instance.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 * Return: A pointer to the new dog instance.
 */
dog_t *new_dog(char *name, float age, char *owner) {
    int nameLength = strlen(name);
    int ownerLength = strlen(owner);
    dog_t *newDog = malloc(sizeof(dog_t));

    if (newDog == NULL)
        return NULL;

    newDog->name = malloc(nameLength + 1);
    if (newDog->name == NULL) {
        free(newDog);
        return NULL;
    }
    strcpy(newDog->name, name);

    newDog->age = age;

    newDog->owner = malloc(ownerLength + 1);
    if (newDog->owner == NULL) {
        free(newDog->name);
        free(newDog);
        return NULL;
    }
    strcpy(newDog->owner, owner);

    return (newDog);
}

