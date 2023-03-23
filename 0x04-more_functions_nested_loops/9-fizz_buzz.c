#include "main.h"
#include <stdio.h>
/**
 * main - Program that prints the numbers from 1 to 100
 * for multiples of three print Fizz instead of the number
 * print Buzz for multiple of five
 * numbers wich are multiples of 3 & 5 print FizzBuzz
 * Return: 0 (Success)
 */
int main(void)
{
int n;
for (n = 1 ; n <= 100 ; n++)
{
if (n % 3 == 0 && n % 5 != 0)
{
printf(" Fizz");
}
else if (n % 5 == 0 && n % 3 != 0)
{
printf(" Buzz");
}
else if (n % 3 == 0 && n % 5 == 0)
{
printf(" FizzBuzz");
}
else if (n == 1)
{
printf("%d", n);
}
else
{
printf(" %d", n);
}
}
printf("\n");
return (0);
}
