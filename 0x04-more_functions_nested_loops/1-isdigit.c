#include "main.h"
/**
 * _isdigit - Fuction that checks for a digit
 * @c: The character to check
 * Return: 1 is c is a digit or 0 otherwise
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
	return (1);
else
	return (0);
}
