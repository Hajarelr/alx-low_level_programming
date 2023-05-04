#include "main.h"
/**
 * binary_to_uint - Function that converts a binary number to an
 * unsigned int
 * @b: String of 0 & 1 chars
 * Return: The converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
int n;
unsigned int m = 0;
if (!b)
return (0);
for (n = 0 ; b[n] ; n++)
{
if (b[n] < '0' || b[n] > '1')
return (0);
m = 2 * m + (b[n] - '0');
}
return (m);
}
