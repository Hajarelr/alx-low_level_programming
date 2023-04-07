#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Program that adds positive numbers
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 0 (Success) 1 (Error)
 */
int main(int argc, char *argv[])
{
int n;
unsigned int m, o = 0;
char *p;
if (argc > 1)
{
for (n = 1 ; n < argc ; n++)
{
p = argv[n];
for (m = 0; m < strlen(p); m++)
{
if (p[m] < 48 || p[m] > 57)
{
printf("Error\n");
return (1);
}
}
o += atoi(p);
p++;
}
printf("%d\n", o);
}
else
{
printf("0\n");
}
return (0);
}
