#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * _strlen - Entry point
 *
 * @s: variable
 * Return: Always 0.
 */
int _strlen(const char *s)
{
	char *p = s;

	while (*p != '\0')
		p++;
	return (p - s);
}

/**
 * add_node_end - check the code
 *
 * @head: var
 * @str: var
 *
 * Return: Always 0.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *last;
	list_t *new_n = malloc(sizeof(list_t));

	if (new_n == NULL)
		return (NULL);

	new_n->str = strdup(str);
	new_n->len = _strlen(str);
	new_n->next = NULL;

	if (*head == NULL)
		*head = new_n;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new_n;
	}

	return (new_n);
}
