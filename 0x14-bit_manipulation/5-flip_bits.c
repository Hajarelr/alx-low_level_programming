#include "main.h"
/**
 * flip_bits - Function that returns the number of bits you would need to flip
 * to get from one number to another
 * @n: Input 1
 * @m: Input 2
 * Return: The number of bits we need to flip to get from one number to another
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int a = n ^ m, b = 0;
while (a > 0)
{
b += (a & 1);
a >>= 1;
}
return (b);
}
