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
	for (i = 1 ; i < n ; i++)
	{
		for (k = i ; k < (n - 1) ; k++)
			putchar(' ');
		for (j = 0 ; j < i ; j++)
			putchar(35);
		putchar(' ');
		putchar('\n');
	}
}
