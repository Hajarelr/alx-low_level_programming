#include "function_pointers.h"
/**
 * array_iterator - Functions that executes a function given a a parameter
 * on each element of an array
 * @array: 1st input
 * @size: The size of the array
 * @action: Pointer to the function we're using
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int n = 0;
if (array != NULL && action != NULL && size > 0)
{
while (n < size)
{
action(array[n]);
n++;
}
}
}
