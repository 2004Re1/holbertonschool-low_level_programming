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
    int i;
    
	for (i = 0; i < index; i++)
	{
		head = head->next;
	}

	return (head);
}
