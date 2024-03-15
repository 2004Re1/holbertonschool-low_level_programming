#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - check the code
 *
 * @min: var
 * @max: var
 *
 * Return: Always 0.
 */
int *array_range(int min, int max)
{
	int *a;
	int i;
	int n = max - min;

	if (min > max)
		return (NULL);

	a = malloc(sizeof(int) *n);

	for (i = 0; i < n; i++)
		a[i] = i;

	if (a == NULL)
		return (NULL);

	return (a);
}
