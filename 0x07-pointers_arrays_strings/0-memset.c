#include "main.h"
/**
 * _memset - Function that fills memory with a constant byte
 * @s: Pointed bytes
 * @n: First bytes of the memory area
 * @b: The constant byte
 * Return: 0 (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int m;
for (m = 0 ; m < n ; m++)
s[m] = b;
return (s);
}
