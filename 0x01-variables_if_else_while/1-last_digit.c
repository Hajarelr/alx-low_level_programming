#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints the last digit of the number stored in the variable n
 * Wether it is greater than 5, less than 6 and not 0 or 0
 * Return: 0 (Success)
 */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
if (m > 5)
{
printf("Last digit of %d is %d and is greater than 5", n, m);
}
else if (m == 0)
{
printf("Last digit of %d is %d and is 0", n, m);
}
else
{
printf("Last digit of %d is %d and is less than 6 and not 0", n, m);
}
return (0);
}

