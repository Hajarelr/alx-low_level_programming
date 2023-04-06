#include "main.h"
#include <stdio.h>
/**
 * main - Program that prints the number of arguments passed into it
 * @argc: Number of arguments
 * @argv: array of arguments
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
printf("%d\n", argc - 1);
return (0);
}
