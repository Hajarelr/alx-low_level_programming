#include <stdio.h>
static int test_palindromic(unsigned int n);
/**
 * main - Function that finds out if it is palindrome
 * Return: Void
 */
int main(void)
{
unsigned int a, b, c = 0;
for (a = 100; a <= 999; a++) {
for (b = 100; b <= 999; b++) {
unsigned int d = a*b;
if (test_palindromic(d) && d > c) {
c = d;
}
}
}
printf("%u\n", c);
return (0);
}
/**
 * test_palindromic: Function that gets the result of two 3 digits
 * @n: 1st input
 * Return: the result
 */
int test_palindromic(unsigned int n)
{
unsigned int r = 0, s = n;
while (s) 
{
r = 10*r + (s % 10);
s /= 10;
}
return (r == n);
}
