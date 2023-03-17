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
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
if (ld > 5)
{
printf("Last digit of %d is %d and is greater than 5", n, ld);
}
else if (ld == 0)
{
printf("Last digit of %d is %d and is 0", n, ld);
}
else
{
printf("Last digit of %d is %d and is less than 6 and not 0", n, ld);
}
return (0);
}

