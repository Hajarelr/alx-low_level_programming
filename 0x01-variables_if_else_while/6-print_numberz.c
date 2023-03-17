#include <stdio.h>
/**
 * main - Prints all single digit numbers of base 10
 * Starting from 0
 * Return: 0 (Success)
 */
int main(void)
{
	int n;
for (n = 0 ; n <= 9 ; n++)
{
putchar(n + 48);
}
putchar('\n');
return (0);
}
