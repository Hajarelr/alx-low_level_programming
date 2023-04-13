#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _realloc - Function that reallocates a memory block using malloc & free
 * @ptr: Pointer
 * @old_size: Size in bytes of ptr
 * @new_size: New size in bytes of the new memory block
 * Return: void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *k;
unsigned int n;
if (new_size == old_size)
return (ptr);
if (ptr == NULL)
{
k = malloc(new_size);
if (k == NULL)
return (NULL);
return (k);
}
else
{
if (new_size == 0)
{
free(ptr);
return (NULL);
}
}
k = malloc(new_size);
if (k == NULL)
return (NULL);
for (n = 0 ; n < old_size && n < new_size ; n++)
{
k[n] = ((char *) ptr)[n];
}
free(ptr);
return (k);
}
