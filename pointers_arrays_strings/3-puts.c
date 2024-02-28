#include <string.h>
#include "main.h"
#include <stdio.h>

/**
 * _strlen - Entry point
 *
 * @s: variable
 * Return: Always 0.
 */
void _puts(char *str)
{
	while(*str != '\0')
	{
		puts(str);
	}
}
