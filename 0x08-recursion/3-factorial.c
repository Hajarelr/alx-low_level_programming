#include "main.h"
/**
 * factorial - Fucntion that returns the factorial of a given number
 * @n: The number that we're gonna calculates his factorial
 * Return: Integer value
 */
int factorial(int n)
{
if (n < 0)
return (-1);
if (n <= 1)
return (1);
return (n * factorial(n - 1));
}
