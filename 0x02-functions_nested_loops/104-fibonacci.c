#include <stdio.h>
/**
 * main - Program that finds and prints the firt 98 Fibonacci numbers
 * Starting with 1 & 2
 * Return: 0 (Success)
 */
int main(void)
{
int a;
unsigned long b = 0, c = 1, sum;
unsigned long bd, be, cd, ce;
unsigned long d, e;
for (a = 0; a < 92; a++)
{
sum = b + c;
printf("%lu, ", sum);
b = c;
c = sum;
}
bd = b / 10000000000;
cd = c / 10000000000;
be = b % 10000000000;
ce = c % 10000000000;
for (a = 93; a < 99; a++)
{
d = bd + cd;
e = be + ce;
if (be + ce > 9999999999)
{
d += 1;
e %= 10000000000;
}
printf(",");
bd = cd;
be = ce;
cd = d;
ce = e;
}
printf("\n");
return (0);
}
