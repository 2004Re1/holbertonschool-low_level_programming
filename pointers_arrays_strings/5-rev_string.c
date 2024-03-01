#include <string.h>
#include "main.h"
#include <stdio.h>

/**
 * rev_string - Entry point
 *
 * @s: variable
 * Return: Always 0.
 */
void rev_string(char *s)
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
