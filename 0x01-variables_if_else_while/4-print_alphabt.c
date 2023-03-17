#include <stdio.h>
/**
 * main - Prints alphabet in lowercase
 * Except q and e
 * Return: 0 (Success)
 */
int main(void)
{
	int n = 97;
while (n <= 122)
{
	if (n != 113 && n != 101 && n <= 122)
		putchar(n);
	n++;
}
putchar ('\n');
return (0);
}
