#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *get_dnodeint_at_index - check the code
 *
 *@head: var
 *@index: var
 *
 *Return: Always EXIT_SUCCESS.
 */

dlistint_t* get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	dlistint_t * temp;
	temp = head;
	for (i = 0; i < index; i++)
	{
		temp = temp->next;
	}

	return (temp);
}
