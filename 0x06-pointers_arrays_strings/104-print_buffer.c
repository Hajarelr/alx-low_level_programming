#include "main.h"
#include <stdio.h>
/**
 * print_buffer - Function that prints a buffer
 * @b: buffer
 * @size: size
 * Return: void
 */
void print_buffer(char *b, int size)
{
int n, m, o;
n = 0;
if (size <= 0)
{
printf("\n");
return;
}
while (n < size)
{
m = size - n < 10 ? size - n : 10;
printf("%08x: ", n);
for (o = 0; o < 10; o++)
{
if (o < m)
printf("%02x", *(b + n + o));
else
printf("  ");
if (o % 2)
{
printf(" ");
}
}
for (o = 0; o < m; o++)
{
int c = *(b + n + o);
if (c < 32 || c > 132)
{
c = '.';
}
printf("%c", c);
}
printf("\n");
n += 10;
}
}
