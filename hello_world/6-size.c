#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char intType;
int floatType;
long int doubleType;
long long int charType;
float floattype;
printf("Size of char: %zu bytes\n", sizeof(intType));
printf("Size of int: %zu bytes\n", sizeof(floatType));
printf("Size of long int: %zu bytes\n", sizeof(doubleType));
printf("Size of long long int: %zu byte\n", sizeof(charType));
printf("Size of float: %zu byte\n", sizeof(floattype));
return (0);
}
