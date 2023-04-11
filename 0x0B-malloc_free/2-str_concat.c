#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - Function that concatenates two strings
 * @s1: 1st string
 * @s2: Second string
 * Return: the concatenates strings, NULL if failed
 */
char *str_concat(char *s1, char *s2)
{
int n = 0, m = 0, o = 0, p = 0;
char *q;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[n])
n++;
while (s2[m])
m++;
p = n + m;
q = malloc((sizeof(char) * p) +1);
if (q == NULL)
return (NULL);
m = 0;
while (o < p)
{
if (o <= n)
q[o] = s1[o];
if (o >= n)
{
q[o] = s2[m];
m++;
}
o++;
}
q[o] = '\0';
return (q);
}
