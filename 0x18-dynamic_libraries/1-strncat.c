#include "main.h"
/**
 * _strncat - Function that concatenates two strings
 * using at most n bytes from src
 * @dest: string 1
 * @src: string 2
 * @n: input value
 * Return: string 1
 */
char *_strncat(char *dest, char *src, int n)
{
int m;
int o;
m = 0;
while (dest[m] != '\0')
{
m++;
}
o = 0;
while (o < n && src[o] != '\0')
{
dest[m] = src[o];
m++;
o++;
}
dest[m] = '\0';
return (dest);
}
