#include "main.h"
/**
 * *print_square- returns the sign of a number
 * *@n: number to be checked
 * *Return: -1, 1 or 0
 */
void print_square(int n)
{
int i, j;
for (i = 0 ; i < n ; i++)
{
	for (j = 0 ; j < n ; j++)
	_putchar(35);
	_putchar('\n');
}
if (n <= 0)
_putchar('\n');
}
