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
	char *help;
	help = s;
	while(*help != '\0')
		help++;


	while(help >= s)
	{
	       _putchar(*help);
		help--;	
	}
}
