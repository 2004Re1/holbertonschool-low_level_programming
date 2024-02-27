#include "main.h"
/**
*_isdigit - returns the absolute value of a number
*@c: number to be checked
*Return: the absolute value
*/
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (0);
	else
		return (1);
}
