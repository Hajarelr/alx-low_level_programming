#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - Function that allocates using malloc
 * @b: The size to allocate
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
void *n;
n = malloc(b);
if (n == NULL)
exit(98);
return (n);
}
