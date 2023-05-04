#include "main.h"
/**
 * get_bit - Function that returns the valude of a bit at a given index
 * @n: Input
 * @index: The index strating from 0 of the bit we want to get
 * Return: The value of the bit at index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index >= (sizeof(unsigned long int) * 8))
return (-1);
if ((n & (1 << index)) == 0)
return (0);
return (1);
}
