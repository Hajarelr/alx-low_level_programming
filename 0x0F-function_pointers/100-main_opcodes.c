#include <stdlib.h>
#include <stdio.h>
/**
 * main - Function that prints its own opcodes
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
int n, m;
int (*o)(int, char **) = main;
unsigned char p;
if (argc != 2)
{
printf("Error\n");
exit(1);
}
n = atoi(argv[1]);
if (n < 0)
{
printf("Error\n");
exit(2);
}
for (m = 0 ; m < n ; m++)
{
p = *(unsigned char *)o;
printf("%.2x", p);
if (m == n - 1)
continue;
printf(" ");
o++;
}
printf("\n");
return (0);
}
