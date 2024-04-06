#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * *insert_dnodeint_at_index - check the code
 *
 * @h: var
 * @idx: var
 * @n: var
 *
 * Return: Always EXIT_SUCCESS.
 */

dlistint_t* insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;

	dlistint_t * node1;
	node1 = malloc(sizeof(dlistint_t));
	node1->n = n;

	dlistint_t *temp;
	dlistint_t *temp1;
	temp = *h;
	temp1 = (*h)->next;
	idx--;
	for (i = 0; i < idx; i++)
	{
		temp = temp->next;
		temp1 = temp->next;
	}

	temp->next = node1;
	node1->prev = temp;
	temp1->prev = node1;
	node1->next = temp1;

	return (*h);

}
