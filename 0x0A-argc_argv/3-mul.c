#include "main.h"
#include <stdio.h>
/**
 * _atoi - Function that converts a string to an integer
 * @s: String
 * Return: The converted integer
 */
int _atoi(char *s)
{
int n, m, o, p, q, r;
n = 0;
m = 0;
o = 0;
p = 0;
q = 0;
r = 0;
while (s[p] != '\0')
p++;
while (n < p && q == 0)
{
if (s[n] == '-')
++m;
if (s[n] >= '0' && s[n] <= '9')
{
r = s[n] - '0';
if (m % 2)
r = -r;
o = o * 10 + r;
q = 1;
if (s[n + 1] < '0' || s[n + 1] > '9')
break;
q = 0;
}
n++;
}
if (q == 0)
return (0);
return (o);
}
/**
 * main - Program that multiplies two numbers
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
int a, b, c;
if (argc < 3 || argc > 3)
{
printf("Error\n");
return (1);
}
b = _atoi(argv[1]);
c = _atoi(argv[2]);
a = b *c;
printf("%d\n", a);
return (0);
}
