#include <stdio.h>
#include "main.h"
void print(int n)
{
	if (n/10)
	print(n/10);
	putchar(n%10 + '0');
}

int main (void)
{

int i;
for (i = 1 ; i < 100 ; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
putchar('F');
putchar('i');
putchar('z');
putchar('z');
putchar('B');
putchar('u');
putchar('z');
putchar('z');        
}
else if (i % 3 == 0)
{
putchar('F');
putchar('i');
putchar('z');
putchar('z');       
}
else if (i % 5 == 0)
{
putchar('B');
putchar('u');
putchar('z');
putchar('z');
}
else
print(i);
putchar(' ');        
}
}
