#include "search_algos.h"
/**
  * interpolation_search - Function that searches for a value in a sorted array
  * @array: A pointer to the first element of the array to search
  * @size: The number of elements in the array
  * @value: The value to search for
  * Return: If the value is not present or the array is NULL -1
  * Otherwise the first index where the value is located
  */
int interpolation_search(int *array, size_t size, int value)
{
size_t n, m, o;
if (array == NULL)
return (-1);
for (m = 0, o = size - 1; o >= m;)
{
n = m + (((double)(o - m) / (array[o] - array[m])) * (value - array[m]));
if (n < size)
printf("Value checked array[%ld] = [%d]\n", n, array[n]);
else
{
printf("Value checked array[%ld] is out of range\n", n);
break;
}
if (array[n] == value)
return (n);
if (array[n] > value)
o = n - 1;
else
m = n + 1;
}
return (-1);
}
