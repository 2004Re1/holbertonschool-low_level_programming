#include "main.h"
/**
 * *print_diagona- returns the sign of a number
 * *@n: number to be checked
 * *Return: -1, 1 or 0
 */
void print_diagonal(int n)
{
int i, j;

for(i = 0 ; i<n;i++)
{
for(j=0;j<i;j++)
{
	_putchar(' ');
}
_putchar(92);
_putchar('\n');
}
if (n <= 0)
_putchar('\n');
}
