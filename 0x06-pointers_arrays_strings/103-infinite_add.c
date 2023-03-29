#include "main.h"
/**
 * rev_string - reverse array
 * @n: integer parameters
 * Return: 0
 */
void rev_string(char *n)
{
int m = 0;
int o = 0;
char k;
while (*(n + m) != '\0')
{
m++;	
}
m--;
for (o = 0; o < m; o++, m--)
{
k = *(n + o);
*(n + o) = *(n + m);
*(n + m) = k;
}
}
/**
 * infinite_add - Function that adds 2 numbers
 * @n1: text representation of 1st number to add
 * @n2: text representation of 2nd number to add
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return: pointer to calling function
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int l = 0, m = 0, o = 0, k = 0;
int x = 0, y = 0, z = 0;
while (*(n1 + m) != '\0')
m++;
while (*(n2 + o) != '\0')
o++;
m--;
o--;
if (o >= size_r || m >= size_r)
return (0);
while (o >= 0 || m  >= 0 || l == 1)
{
if (m < 0)
x = 0;
else
x = *(n1 + m) -'0';
if (o < 0)
y = 0;
else
y = *(n2 + o) -'0';
z = x + y + l;
if (z >= 10)
l = 1;
else
l = 0;
if (k >= (size_r - 1))
return (0);
*(r + k) = (z % 10) + '0';
k++;
o--;
m--;
}
if (k == size_r)
return (0);
*(r + k) = '\0';
rev_string(r);
return (r);
}
