#include "main.h"
#include <stdio.h>
/**
 * main - Program that prints all arguments it receives
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
int n;
for (n = 0; n < argc; n++)
{
printf("%s\n", argv[n]);
}
return (0);
}
