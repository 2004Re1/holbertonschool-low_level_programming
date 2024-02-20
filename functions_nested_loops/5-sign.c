#include "main.h"
/**
*print_sign - controls if a character is in lowercase
*@c: character to be verified
*Return: return 0 or 1
*/
int print_sign(int n)
{
	if(n > 0)
		_putchar('+')
		return(1);
	if(n < 0)
		_putchar('-')
		return(-1);
	if(n == 0)
		_putchar('0')
		return(0);
}
