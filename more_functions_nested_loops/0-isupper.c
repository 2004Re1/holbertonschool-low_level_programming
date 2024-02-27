#include "main.h"
/*
 * _isupper - doing somethink 
 * @c just variable
 * return 0 or 1 
 * */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
