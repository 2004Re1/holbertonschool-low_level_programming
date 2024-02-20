#include "main.h"

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <98)
		{
			print (n);
			n++;
		}


	}
	
	if (n > 98)
        {
                while (n <98)
                {
                        print (n);
                        n--;
                }


        }
	
       if (n == 98)
       {
        print(n);
	_putchar('\n');	
       }
}

void print(long n)
{
    // If number is smaller than 0, put a - sign
    // and change number to positive
    if (n < 0) {
        putchar('-');
        n = -n;
    }

    // Remove the last digit and recur
    if (n/10)
        print(n/10);

    // Print the last digit
    putchar(n%10 + '0');
}
