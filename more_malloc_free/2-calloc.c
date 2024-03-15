#include "main.h"
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
	if (size == NULL || nmemb == NULL)
		return (NULL);

	char *ptr;
	ptr = malloc(nmemb *size);

	if (ptr == NULL)
		return (NULL);

	int i;
	for (i = 0; i < nmemb * size; i++)
		ptr[i] = 0;

	return (ptr);

	return ptr;
}
