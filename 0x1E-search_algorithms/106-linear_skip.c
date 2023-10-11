#include "search_algos.h"

/**
 * linear_skip - Fucntion that searches for an algorithm in a sorted singly
 * linked list of integers using linear skip.
 * @list: A pointer to the  head of the linked list to search
 * @value: The value to search for
 * Return: If the value is not present or the head of the list is NULL return
 * NULL otherwise a pointer to the first node where the value is located
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
skiplist_t *o, *p;
if (list == NULL)
return (NULL);
for (o = p = list; p->next != NULL && p->n < value;)
{
o = p;
if (p->express != NULL)
{
p = p->express;
printf("Value checked at index [%ld] = [%d]\n",
p->index, p->n);
}
else
{
while (p->next != NULL)
p = p->next;
}
}
printf("Value found between indexes [%ld] and [%ld]\n",
o->index, p->index);
for (; o->index < p->index && o->n < value; o = o->next)
printf("Value checked at index [%ld] = [%d]\n", o->index, o->n);
printf("Value checked at index [%ld] = [%d]\n", o->index, o->n);
return (o->n == value ? o : NULL);
}
