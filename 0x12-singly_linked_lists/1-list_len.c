#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * list_len - Function that returns the number of elements in a linked
 * list_t list
 * @h: The linked list
 * Return: The number of elements in the linked list_t list
 */
size_t list_len(const list_t *h)
{
size_t n = 0;
while (h)
{
h = h->next;
n++;
}
return (n);
}
