#include <stdio.h>
#include "math.h"
#include <stdlib.h>
/**
 *_strdup - fills memory
 *@str: size
 *Return: char
 */
char *_strdup(char *str)
{
	int s = 0;
	while (str[s] != '\0')
	{
		s++;
	}

	char *str1;

	str1 = malloc(sizeof(char) *s);
	for (int i = 0; i < s; i++)
		str1[i] = str[i];

	return (str1);
}

