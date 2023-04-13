#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#define ERR_MSG "Error"

/**
 * is_digit - Function that checks if a string contains a non-digit char
 * @s: The string that we're going to evaluate
 * Return: 0 if a non-digit is found otherwise 1
 */
int is_digit(char *s)
{
int n = 0;
while (s[n])
{
if (s[n] < '0' || s[n] > '9')
return (0);
n++;
}
return (1);
}
/**
 * _strlen - Function that returns the length of a string
 * @s: The string to be evaluated
 * Return: The length of the string
 */
int _strlen(char *s)
{
int n = 0;
while (s[n] != '\0')
{
n++;
}
return (n);
}
/**
 * errors - Function that handles errors for main
 */
void errors(void)
{
printf("Error\n");
exit(98);
}
/**
 * main - Function that multiplies two positive numbers
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
char *n, *m;
int o, p, q, r, s, t, u, *v, w = 0;
n = argv[1], m = argv[2];
if (argc != 3 || !is_digit(n) || !is_digit(m))
errors();
o = _strlen(n);
p = _strlen(m);
q = o + p + 1;
v = malloc(sizeof(int) * q);
if (!v)
return (1);
for (r = 0; r <= o + p; r++)
v[r] = 0;
for (o = o - 1; o >= 0; o--)
{
t = n[o] - '0';
s = 0;
for (p = _strlen(m) - 1; p >= 0; p--)
{
u = m[p] - '0';
s += v[o + p + 1] + (t *u);
v[o + p + 1] = s % 10;
s /= 10;
}
if (s > 0)
v[o + p + 1] += s;
}
for (r = 0; r < q - 1; r++)
{
if (v[r])
w = 1;
if (w)
_putchar(v[r] + '0');
}
if (!w)
_putchar('0');
_putchar('\n');
free(v);
return (0);
}
