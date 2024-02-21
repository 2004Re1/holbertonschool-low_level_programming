#include "main.h"
/**
*print - Fsjkoipfhasiofh
*@n: doinf something
*/
void print(int n) 
{   
    if (n < 0) {
        putchar('-');
        n = abs(n);
    }
    
    if (n > 0) 
        print(n / 10);
    else return;
    
    putchar('0' + n % 10);
}
/**
*jack_bauer - Fuck Betty
*/
void jack_bauer(void) 
{
    // Write C code here
    
    int i,j;
    for(i = 0 ; i < 24 ; i++)
    {
        for(j = 0 ; j < 60 ; j++)
        {
            if(i == 0)
            putchar('0');
            if(i<10)
            putchar('0');
            print(i);
            
            putchar(':');
            
            
            if(j == 0)
            putchar('0');
            if(j<10)
            putchar('0');
            print(j);
            
            putchar('\n');

        }
    }

    return 0; 
}
