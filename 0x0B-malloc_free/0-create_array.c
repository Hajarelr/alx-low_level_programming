#include "main.h"
#include <stdlib.h>
/**
 * create_array - Function that creates an array of chars
 * and initializes it with a specific char
 * @size: The size of the array
 * @c: input
 * Return: The created array, NULL if fail
 */
char *create_array(unsigned int size, char c)
{
unsigned int n;
char *m;
if (size == 0)
return (NULL);
m = malloc(size * sizeof(char));
if (m == NULL)
return (NULL);
for (n = 0 ; n < size ; n++)
{
m[n] = c;
}
return (m);
}
