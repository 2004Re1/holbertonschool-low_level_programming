#include "main.h"
void print(long n);
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
    if (n < 0) {
        putchar('-');
        n = -n;
    }

    if (n/10)
        print(n/10);

    putchar(n%10 + '0');
}
