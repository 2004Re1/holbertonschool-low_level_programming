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
printf("Size of char:byte(s)\n", sizeof(intType));
printf("Size of int: %zu byte(s)\n", sizeof(floatType));
printf("Size of long int: %zu byte(s)\n", sizeof(doubleType));
printf("Size of long long int: %zu byte(s)\n", sizeof(charType));
printf("Size of float: %zu byte(s)\n", sizeof(floattype));
return (0);
}
