#include "main.h"
/**
 * _strcat - Function that concatenates two strings
 * @src: string 1
 * @dest: string 2
 * Return: string 2
 */
char *_strcat(char *dest, char *src)
{
int n;
int m;
n = 0;
while (dest[n] != '\0')
{
n++;
}
m = 0;
while (src[m] != '\0')
{
dest[n] = src[m];
n++;
m++;
}
dest[n] = '\0';
return (dest);
}
