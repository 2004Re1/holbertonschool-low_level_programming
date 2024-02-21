#include "main.h"
/**
*print - Fsjkoipfhasiofh
*@n: doinf something
*/
void print(int n)
{
	if (n > 0)
	print(n / 10);
	else
	return;
	_putchar('0' + n % 10);
}
/**
*jack_bauer - Fuck Betty
*/
void jack_bauer(void)
{
	int i, j;

	for (i = 0 ; i < 24 ; i++)
	{
	for (j = 0 ; j < 60 ; j++)
	{
	if (i == 0)
	_putchar('0');
	if (i < 10)
	_putchar('0');
	print(i);
	_putchar(':');
	if (j == 0)
	_putchar('0');
	if (j < 10)
	_putchar('0');
	print(j);
	_putchar('\n');
	}
	}
}
