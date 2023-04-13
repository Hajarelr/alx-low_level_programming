#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - Function that concatenates two strings
 * @s1: 1st string
 * @s2: 2nd string
 * @n: input
 * Return: NULL if the function fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int m = 0, o = 0, p = 0, q = 0;
char *r;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[m])
m++;
while (s2[p])
p++;
if (n >= p)
q = m + p;
else
q = m + n;
r = malloc(sizeof(char) * q + 1);
if (r == NULL)
return (NULL);
p = 0;
while (o < q)
{
if (o <= m)
r[o] = s1[o];
if (o >= m)
{
r[o] = s2[p];
p++;
}
o++;
}
r[o] = '\0';
return (r);
}
