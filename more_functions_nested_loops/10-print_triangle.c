#include "main.h"
/**
 * * print_triangle- returns the sign of a number
 * * @size: number to be checked
 * * Return: -1, 1 or 0
 * */
void print_triangle(int size)
{
	int i, j, k;
	size++;
	for (i = 1 ; i < size ; i++)
	{
		for (k = i ; k < (size - 1) ; k++)
			_putchar(' ');
		for (j = 0 ; j < i ; j++)
			_putchar(35);
		_putchar(' ');
		_putchar('\n');
	}
}
