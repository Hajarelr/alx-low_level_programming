#include "main.h"
#include <stdlib.h>
/**
 * _calloc - Function that allocates memory for an array using malloc
 * @nmemb: input 1
 * @size: input 2
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
int n = 0, m = 0;
char *o;
if (nmemb == 0 || size == 0)
return (NULL);
m = nmemb * size;
o = malloc(m);
if (o == NULL)
return (NULL);
while (n < m)
{
o[n] = 0;
n++;
}
return (o);
}
