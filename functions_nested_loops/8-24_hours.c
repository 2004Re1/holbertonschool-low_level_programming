#include "main.h"
void print(int n);
void jack_bauer(void)
{
	int n;
	for(n = 0 ; n <24 ; n++)
	{
		if(n <10)
		{	
			print(0);
			print(n);
		}
		else
		print(n);
		_putchar(':');

		for(n = 0 ; n < 60 ; n++)
			{
				if(n <10)
                		{
                        		print(0);
                        		print(n);
           			     }
				else
				print(n);
                		_putchar(':');
			}
		
	}	
}


void print(int n) {
    
    if (n < 0) {
        _putchar('-');
        n = abs(n);
    }
    
    if (n > 0) 
        print(n / 10);
    else return;
    
    _putchar('0' + n % 10);
}
