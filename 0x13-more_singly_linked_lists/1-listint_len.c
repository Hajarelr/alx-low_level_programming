#include "lists.h"
#include <stdio.h>
/**
 * listint_len - Function that retuns the number of elements in a linked
 * listint_t
 * @h: Pointer
 * Return: The number of elements in a linked listint_t list
 */
size_t listint_len(const listint_t *h)
{
size_t m = 0;
while (h)
{
m++;
h = h->next;
}
return (m);
}
