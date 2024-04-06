#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlist_len - check the code
 *
 * @h: var
 *
 * Return: Always 0.
 */
size_t print_dlist_len(const dlistint_t *h)
{
        int count = 0;

        while (h)
        {
                h = h->next;
                count++;
        }

        return (count);

}
