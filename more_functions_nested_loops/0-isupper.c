#include "main.h"
/**
*_isupper - returns the absolute value of a number
*@c: number to be checked
*Return: the absolute value
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
