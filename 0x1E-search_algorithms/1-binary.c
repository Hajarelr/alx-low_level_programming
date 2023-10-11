#include "search_algos.h"
/**
  * binary_search - Script that searches for a value in a sorted array
  * @array: A pointer to the first element of the array to search
  * @size: The number of elements in the array
  * @value: The value to search for
  * Return: If the value is not present or the array is NULL -1
  * Otherwise the index where the value is located
  */
int binary_search(int *array, size_t size, int value)
{
size_t n, m, o;
if (array == NULL)
return (-1);
for (m = 0, o = size - 1; o >= m;)
{
printf("Searching in array: ");
for (n = m; n < o; n++)
printf("%d, ", array[n]);
printf("%d\n", array[n]);
n = m + (o - m) / 2;
if (array[n] == value)
return (n);
if (array[n] > value)
o = n - 1;
else
m = n + 1;
}
return (-1);
}
