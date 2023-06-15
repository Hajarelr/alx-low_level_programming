#include "lists.h"
/**
 * dlistint_len - Function that returns the number of elements in a linked
 * dlistint_t list
 * @h: Input
 * Return: The number of nodes
 **/
size_t dlistint_len(const dlistint_t *h)
{
const dlistint_t *c = h;
size_t d = 0;
while (c)
{
d++;
c = c->next;
}
return (d);
}
