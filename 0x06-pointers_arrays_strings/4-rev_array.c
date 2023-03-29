#include "main.h"
/**
 * reverse_array - Function that reverses the content of an array of integers
 * @a: array
 * @n: numbers of elements of an array
 * Return: void
 */
void reverse_array(int *a, int n)
{
int m;
int o;
for (m = 0 ; m < n-- ; m++)
{
o = a[m];
a[m] = a[n];
a[n] = o;
}
}
