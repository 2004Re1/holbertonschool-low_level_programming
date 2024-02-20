#include "main.h"
/**
*_isalpha - controls if a character is in lowercase
*@c: character to be verified
*Return: return 0 or 1
*/
int _isalpha(int c)
{
return (1 ? (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') : 0);
}
