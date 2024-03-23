#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - addition of all arguments
 * @n: number of given integers
 * Return: sum of these arguments
 */
int sum_them_all(const unsigned int n, ...)
{
if (n == 0)
return (0);
	va_list lol;
	va_start(lol, n);
	int i;
	int sum;
	for(i = 0 ; i < n ; i++)
	{
		sum = sum + va_arg(lol, int);	
	}
	va_end(lol);
	return (sum);

}
