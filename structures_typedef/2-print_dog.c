#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
  * print_dog - initialize struct dog.
  * @d: name of struct
  */

void print_dog(struct dog *d)
{
if (d)
{
	printf("Name: %s\n",(*d).name);
	printf("Age: %d\n",(*d).age);
	printf("Owner: %s\n"(*d).owner);
}
}
