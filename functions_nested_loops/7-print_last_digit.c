#include "main.h"

int print_last_digit(int a)
{
	int r;
	r = a < 0 ? (-1*a)%10 : a%10;
	_putchar (r + '0');
	return (a%10);
}
