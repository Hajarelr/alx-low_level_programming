#include "lists.h"
/**
 * insert_dnodeint_at_index - Function that inserts a new node at a given
 * position
 * @h: 1st input
 * @idx: 2nd input
 * @n: 3th input
 * Return: NULL if it is not possible
 **/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *o = *h, *p;
unsigned int q, r = 0;
p = malloc(sizeof(dlistint_t));
if (p == NULL)
return (NULL);
p->n = n;
if (idx == 0)
{
p->prev = NULL;
p->next = *h;
if (*h)
(*h)->prev = p;
*h = p;
return (*h);
}
q = idx - 1;
while (o && r != q)
{
r++;
o = o->next;
}
if (r == q && o)
{
p->prev = o;
p->next = o->next;
if (o->next)
o->next->prev = p;
o->next = p;
return (p);
}
free(p);
return (NULL);
}
