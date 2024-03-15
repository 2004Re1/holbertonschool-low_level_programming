#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *_calloc - check the code
 *
 *@nmemb: var
 *@size: var
 *
 *Return: Always 0.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i;
	char *ptr;
	if (size == 0 || nmemb == 0)
		return (NULL);

	ptr = malloc(nmemb *size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		ptr[i] = 0;

	return (ptr);

	return ptr;
}
