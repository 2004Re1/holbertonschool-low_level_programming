#include "main.h"

/**
*print_sign - returns the sign of a number
*@n: number to be checked
*Return: -1, 1 or 0
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
