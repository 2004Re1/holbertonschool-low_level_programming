#include "main.h"
/**
*sign - returns the sign of a number
*@n: number to be checked
*Return: -1, 1 or 0
*/
void print (long n);
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			print (n);
			n++;
			_putchar (',');
			_putchar (' ');
		}
		_putchar ('9');
		_putchar ('8');


	}
	else if (n > 98)
	{
		while (n > 98)
		{
			print (n);
			_putchar (',');
			_putchar (' ');
			n--;
		}
		_putchar ('9');
		_putchar ('8');
	}

	else if (n == 98)
	{
	print (n);
	}

	_putchar ('\n');
}

void print (long n)
{
	if (n < 0)
	{
	_putchar ('-');
	n = -n;
		}

	if (n / 10)
	print (n / 10);

_putchar (n % 10 + '0');
}
