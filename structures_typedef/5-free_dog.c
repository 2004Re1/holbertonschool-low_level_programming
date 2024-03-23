#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
  * free_dog - initialize struct dog.
  * @d: name of struct
  */
void free_dog(dog_t *d)
{
	if(d == NULL)
		return (NULL);
	free(d->name);
	free(d->owner);
	free(d);
}
