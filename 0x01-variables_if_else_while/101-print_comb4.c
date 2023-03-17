#include <stdio.h>
/**
 * main - Prints all possible different combinations of two digits
 * Return: 0 (Success)
 */
int main(void)
{
	int n;
	int m;
	int o;
for (n = 0 ; n <= 9 ; n++)
{
for (m = 1 ; m <= 9 ; m++)
{
for (o = 2 ; o <= 9 ; o++)
{
if (n < m && n < o && m < o &&  n != m && n != o && m != o)
{
putchar(n + '0');
putchar(m + '0');
putchar(o + '0');
if (n + m + o != 24)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
