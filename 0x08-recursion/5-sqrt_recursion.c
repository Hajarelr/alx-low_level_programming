#include "main.h"
#include <stdio.h>
int _sqrt(int n, int i);
/**
 * _sqrt_recursion - Function that returns the value of x
 * raised to the power of y
 * @n: The number that we're gonna calculates the square root
 * Return: The natural suqare root
 */
int _sqrt_recursion(int n)
{
return (_sqrt(n, 1));
}
/**
 * _sqrt - Function that calculates natural square root
 * @n: The number that we're gonna calculates the square root
 * @i: Iterate number
 * Return: The natural square root
 */
int _sqrt(int n, int i)
{
int sqrt = i * i;
if (sqrt > n)
return (-1);
if (sqrt == n)
return (i);
return (_sqrt(n, i + 1));
}
