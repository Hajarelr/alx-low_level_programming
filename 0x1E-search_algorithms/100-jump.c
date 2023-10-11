#include "search_algos.h"
/**
  * jump_search - Function that searches for a value in a sorted array
  * @array: A pointer to the first element of the array to search
  * @size: The number of elements in the array
  * @value: The value to search for
  * Return: If the value is not present or the array is NULL -1
  * Otherwise the first index where the value
  */
int jump_search(int *array, size_t size, int value)
{
size_t n, j, s;
if (array == NULL || size == 0)
return (-1);
s = sqrt(size);
for (n = j = 0; j < size && array[j] < value;)
{
printf("Value checked array[%ld] = [%d]\n", j, array[j]);
n = j;
j += s;
}
printf("Value found between indexes [%ld] and [%ld]\n", n, j);
j = j < size - 1 ? j : size - 1;
for (; n < j && array[n] < value; n++)
printf("Value checked array[%ld] = [%d]\n", n, array[n]);
printf("Value checked array[%ld] = [%d]\n", n, array[n]);
return (array[n] == value ? (int)n : -1);
}
