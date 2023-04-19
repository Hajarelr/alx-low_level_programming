#include "function_pointers.h"
/**
 * int_index - Function that searches for an integer
 * @array: 1st input
 * @size: The number of elements in the array
 * @cmp: Pointer to the functin to be used to compare values
 * Return: -1 if no element matches, 1 if size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int n = 0;
if (size > 0)
{
if (array != NULL && cmp != NULL)
{
while (n < size)
{
if (cmp(array[n]))
return (n);
n++;
}
}
}
return (-1);
}
