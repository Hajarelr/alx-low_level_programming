#include "function_pointers.h"
#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Function that converts arguments to int
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
int (*oprt)(int, int);
if (argc != 4)
{
printf("Error\n");
exit(98);
}
oprt = get_op_func(argv[2]);
if (!oprt)
{
printf("Error\n");
exit(99);
}
printf("%d\n", oprt(atoi(argv[1]), atoi(argv[3])));
return (0);
}
