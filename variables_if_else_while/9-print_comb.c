#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch = ", ";
int num;
char ch1 = "$";
for (num = 0 ; num < 10 ; num++)
{
putchar('0' + num);
putchar(ch);
}
putchar(ch1);
putchar('\n');
}
