#include "lists.h"
/**
 * add_dnodeint_end - Function that adds a new node at the end of a
 * dlistint_t list
 * @head: 1st input
 * @n:2nd input
 * Return: The address of the new element otherwise NULL
 **/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *f, *g = *head;
f = malloc(sizeof(dlistint_t));
if (f == NULL)
return (NULL);
f->n = n;
f->next = NULL;
if (g)
{
while (g->next)
g = g->next;
f->prev = g;
g->next = f;
}
else
{
*head = f;
f->prev = NULL;
}
return (f);
}
