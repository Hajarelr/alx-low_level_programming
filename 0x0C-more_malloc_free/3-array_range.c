#include "main.h"
#include <stdlib.h>
/**
 * array_range - Function that cratesan array of integers
 * @min: minimum values
 * @max: maximum values
 * Return: integer value
 */
int *array_range(int min, int max)
{
int *n, m = 0;
if (min > max)
return (NULL);
n = malloc((sizeof(int) * (max - min)) + sizeof(int));
if (n == NULL)
return (NULL);
while (min <= max)
{
n[m] = min;
m++;
min++;
}
return (n);
}
