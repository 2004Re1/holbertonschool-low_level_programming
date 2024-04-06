#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - check the code
 *
 * @h: var
 *
 * Return: Always 0.
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;
	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);

}
