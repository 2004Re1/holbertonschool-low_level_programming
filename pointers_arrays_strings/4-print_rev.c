#include <string.h>
#include "main.h"
#include <stdio.h>

/**
 * print_rev - Entry point
 *
 * @s: variable
 * Return: Always 0.
 */
void print_rev(char *s)
{
	char *help;
help = s;
	while (*help != '\0')
		help++;
	help--;

while (help >= s)
{
	       _putchar(*help);
		help--;
}
	_putchar('\n');
}
