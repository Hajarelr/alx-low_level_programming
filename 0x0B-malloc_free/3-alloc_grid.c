#include "main.h"
#include <stdlib.h>
/**
 * allox_grid - Fuctin that returns a pointer to a 2 dimensional array
 * of integers
 * @width: 1st input
 * @height: 2nd input
 * Return: The pointer to 1 dimensional array of integers
 */
int **alloc_grid(int width, int height)
{
int n, m, o, p;
int **q;
if (width <= 0 || height <= 0)
return (NULL);
q = malloc(sizeof(int *) * height);
if (q == NULL)
{
free(q);
return (NULL);
}
for (n = 0 ; n < height ; n++)
{
q[n] = malloc(sizeof(int) * width);
if (q[n] == NULL)
{
for (m = n ; m >= 0 ; m--)
{
free(q[m]);
}
free(q);
return (NULL);
}
}
for (o = 0 ; o < height ; o++)
{
for (p = 0 ; p < width ; p++)
{
q[o][p] = 0;
}
}
return (q);
}
