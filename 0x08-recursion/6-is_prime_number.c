#include "main.h"
#include <stdio.h>
int check_prime(int n, int i);
/**
 * is_prime_number - Function that returns 1 if the input is a prime
 * number, otherwise return 0
 * @n: The number to be checked
 * Return: Integer value
 */
int is_prime_number(int n)
{
return (check_prime(n, 1));
}
/**
 * check_prime - Function that checks if a number is prime number
 * @n: The number to be checked
 * @i: The number of iterations
 * Return 1 for prime or 0 composite
 */
int check_prime(int n, int i)
{
if (n <= 1)
return (0);
if (n % i == 0 && i > 1)
return (0);
if ((n / i) < i)
return (1);
return (check_prime(n, i + 1));
}
