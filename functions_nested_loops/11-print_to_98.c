#include "main.h"

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <98)
		{
		int r;
		r = n;

		while (r >= 10)
		       r = r / 10;
		_putchar('0' + r);

		_putchar('0' + n%10);

		n++;
		}


	}
	
	if (n > 98)
        {
                while (n > 98)
                {
                int r;
                r = n;

                while (r >= 10)
                       r = r / 10;
                _putchar ('0' + r);

                _putchar ('0' + n%10);

                n--;
                }


        }

	if (n == 98)
	{
		_putchar ('9');
		_putchar ('8');
		_putchar ('\n');
	}
	
}
