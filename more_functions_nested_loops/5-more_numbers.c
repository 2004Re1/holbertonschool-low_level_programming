#include "main.h"
/**
 * print - prints the alphabet
 * @n: maskdjaf
 * Return: Always 0 (Success)
 *
 */
void print(int n)
{
	if (n / 10)
	print(n / 10);
	_putchar(n % 10 + '0');
}
/**
  * more_numbers - Print the numbers since 0 up to 9
  *
  * Return: The numbers since 0 up to 9
  */
void more_numbers(void)
{
	int i;
	int j;
for (i = 0 ; i < 10 ; i++)
{
for (j = 0 ; j < 15 ; j++)
{
print(j);
}
_putchar('\n');
}
}
