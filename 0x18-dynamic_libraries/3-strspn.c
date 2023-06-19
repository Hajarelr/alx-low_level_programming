#include "main.h"
/**
 * _strspn - Function that gets the length of a prefix substring
 * @s: String 1
 * @accept: String 2
 * Return: 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int n = 0;
int m;
while (*s)
{
for (m = 0 ; accept[m] ; m++)
{
if (*s == accept[m])
{
n++;
break;
}
else if (accept[m + 1] == '\0')
return (n);
}
s++;
}
return (n);
}
