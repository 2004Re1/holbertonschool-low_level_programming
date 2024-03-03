#include <stdio.h>
#include "main.h"
/*
 * _strlen - skadjafa
 * @s: akjdpajfa
 * return - nese
 * */
int _strlen(char* s)
{
	char *p = s;

	while (*p != '\0')
		p++;
	return (p - s);
}
/*
 * puts2 - mkaSKDAFD
 * @str: sakdakfal
 * */

void puts2(char *str)
{
	int n = _strlen(str);
	int i;
	for (i = 0 ; i < n ; i++)
	if (i % 2 == 0)
	_putchar(*(str + i));
	_putchar('\n');
}
