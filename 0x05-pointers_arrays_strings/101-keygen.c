#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 * Return: Always 0 (Success)
 */
int main(void)
{
int n[100];
int i, sum, m;
sum = 0;
srand(time(NULL));
for (i = 0 ; i < 100 ; i++)
{
n[i] = rand() % 78;
sum += (n[i] + '0');
putchar(n[i] + '0');
if ((2772 - sum)-'0' < 78)
{
m = 2772 - sum - '0';
sum += m;
putchar(m + '0');
break;
}
}
return (0);
}
