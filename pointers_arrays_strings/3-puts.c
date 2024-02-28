#include <string.h>
#include "main.h"
#include <stdio.h>

/**
 * _puts - Entry point
 *
 * @str: variable
 * Return: Always 0.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
_putchar('\n');
}
