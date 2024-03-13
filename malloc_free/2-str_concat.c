#include <stdio.h>
#include <stdlib.h>

/**
 *_strlen - Entry point
 *
 *@s: variable
 *Return: Always 0.
 */
int _strlen(char *s)
{
	char *p = s;

	while (*p != '\0')
		p++;
	return (p - s);
}

/**
 *str_concat - concatenates two strings
 *@s1: str
 *@s2: str
 *Return: char
 */
char *str_concat(char *s1, char *s2)
{
	if (s1 == NULL)
	{
		size_1 = 0;
	}
	else
	{
		size_1 = _strlen(s1);
	}

	if (s2 == NULL)
	{
		size_2 = 0;
	}
	else
	{
		size_2 = _strlen(s2);
	}

	int general = s1len + s2len;
	char *final;

	final = malloc(general* sizeof(char));
	int i;
	for (i = 0; i < general; i++)
	{
		if (i < s1len)
			final[i] = s1[i];
		else
			final[i] = s2[i - s1len];
	}

	arr[i] = '\0';

	return (final);

}
