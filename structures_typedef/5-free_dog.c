#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
  * free_dog - initialize struct dog.
  * @d: name of struct
  */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->age);
	free(d->owner);
	free(d);
}
