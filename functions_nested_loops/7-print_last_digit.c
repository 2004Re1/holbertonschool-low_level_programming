#include "main.h"

int print_last_digit(int a)
{
	int r;
       if(a < 0)
       {	       
 	r = (-a)%10;
	_putchar('0' + r);
       }
       else
	r = (a)%10;
        _putchar('0' + r);
	
	return (a%10);
}
