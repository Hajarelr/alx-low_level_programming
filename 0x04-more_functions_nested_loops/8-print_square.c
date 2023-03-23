#include "main.h"
/**
 * print_square - Fucntion that prints a suqare
 * @size: The size of the square
 * Return: void
 */
void print_square(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int m, o;
for (m = 0 ; m < size ; m++)
{
for (o = 0 ; o < size ; o++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
