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
	for (int i = 0 ; str[i] != '\0' ; i++) 
	{ 
		num = num * 10 + (str[i] - 48); 
	}  
	return (num); 
}

