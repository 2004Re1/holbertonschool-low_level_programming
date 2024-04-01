#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * print_list - prints each element of linked list with lengths.
 *
 * @h: struct that provides string, length and address of next node.
 *
 * Return: the number of nodes in given linked list.
 */
size_t print_list(const list_t *h)
{
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)");
		}
		else
		{
			printf("%d ", p->str);
			h = h->next;
		}
	}
}
