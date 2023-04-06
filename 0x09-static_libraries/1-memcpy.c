#include "main.h"
/**
 * _memcpy - Function that copies memory area
 * @n: Bytes to copy
 * @src: Memory area to copy from
 * @dest: Destionation of copied bytes (memory area)
 * Return: 0 (Success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int m;
for (m = 0 ; m < n ; m++)
dest[m] = src[m];
return (dest);
}
