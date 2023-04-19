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
char *o;
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
o = (char *)main;
for (m = 0 ; m < n ; m++)
{
if (m == n - 1)
{
printf("%02hhx\n", o[m]);
break;
}
printf("%02hhx", o[m]);
}
return (0);
}
