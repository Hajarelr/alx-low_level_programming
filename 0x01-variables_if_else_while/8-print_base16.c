#include <stdio.h>
/**
 * main -  Prints all the number of base 16 in lowercase
 * Return: 0 (Success)
 */
int main(void)
{
	int n;
	int m;
for (n = 0 ; n <= 9 ; n++)
{
putchar(n + '0');
}
for (m = 'a' ; m <= 'f' ; m++)
{
putchar (m);
}
putchar ('\n');
return (0);
}
