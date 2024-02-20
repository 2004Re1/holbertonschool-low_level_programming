#include "main.h"
/**
*_abs - returns the sign of a number
*@n: number to be checked
*Return: -1, 1 or 0
*/
int _abs(int a)
{
	if (a < 0)
		return(-a);
	else
		return(a);
