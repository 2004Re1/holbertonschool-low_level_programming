#include <stdio.h> 
#include <string.h> 
/**
 *_atoi - Entry point
 * @s: 'var'
 * Return: Always 0 (Success)
 */
int _atoi(char *s)
{ 
	int num = 0;
	int i = 0;
	for (i = 0 ; s[i] != '\0' ; i++) 
	{ 
		num = num * 10 + (s[i] - 48); 
	}  
	return (num); 
}

