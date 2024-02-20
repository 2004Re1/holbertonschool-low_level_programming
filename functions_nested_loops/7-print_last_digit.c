#include "main.h"

int print_last_digit(int a)
{
	int r; 
 	r = a%10;
	_putchar('0' + r);
	return (a%10);
}
