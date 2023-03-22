#include <stdio.h>
/**
 * main - Program that computes and prints the sum of all multiples 3/5
 * Return: 0 (Success)
 */
int main(void)
{
int a;
int sum;
sum = 0;
for (a = 0; a < 1024 ; a++)
{
if ((a % 3 == 0) || (a % 5 == 0))
{
sum = sum + a;
}
}
printf("%d\n", sum);
return (0);
}
