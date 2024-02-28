#include <string.h>
#include "main.h"
#include <stdio.h>

/**
 * _puts - Entry point
 *
 * @str: variable
 * Return: Always 0.
 */
void print_rev(char *s)
{
	char *first, *last, *help;
	help = s;
	while(*help != '\0')
		help++;

	int n;
	n = help - s;

	while(help > s)
	{
	       _putchar(*help);
		help--;	
	}
}
