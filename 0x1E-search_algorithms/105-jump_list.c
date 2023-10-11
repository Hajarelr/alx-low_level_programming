#include "search_algos.h"
/**
 * jump_list - Functio nthat searches for an algorithm in a sorted singly
 * linked list of integers using jump search
 * @list: A pointer to the  head of the linked list to search
 * @size: The number of nodes in the list
 * @value: The value to search for
 * Return: If the value is not present or the head of the list is NULL return 
 * NULL otherwise a pointer to the first node where the value is located
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
size_t r, m;
listint_t *o, *p;
if (list == NULL || size == 0)
return (NULL);
r = 0;
m = sqrt(size);
for (o = p = list; p->index + 1 < size && p->n < value;)
	{
o = p;
for (r += m; p->index < r; p = p->next)
{
if (p->index + 1 == size)
break;
}
printf("Value checked at index [%ld] = [%d]\n", p->index, p->n);
}
printf("Value found between indexes [%ld] and [%ld]\n",
o->index, p->index);
for (; o->index < p->index && o->n < value; o = o->next)
printf("Value checked at index [%ld] = [%d]\n", o->index, o->n);
printf("Value checked at index [%ld] = [%d]\n", o->index, o->n);

return (o->n == value ? o : NULL);
}
