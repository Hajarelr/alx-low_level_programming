#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Function that prints the sum of two diagonals
 * of a square matrix of integers
 * @a: 1st input
 * @size: Second input
 * Return: void
 */
void print_diagsums(int *a, int size)
{
int n, m, o = 0, p = 0;
for (n = 0 ; n <= (size * size) ; n = n + size + 1)
o = o + a[n];
for (m = size - 1 ; m <= (size * size) - size ; m = m + size - 1)
p = p + a[m];
printf("%d, %d\n", o, p);
}
