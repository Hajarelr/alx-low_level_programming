#include "lists.h"
/**
 * delete_dnodeint_at_index - Function that deletes the node at index of a
 * dlistint_t list
 * @head: 1st input
 * @index: 2nd input
 * Return: 1 if it succeeded otherwise -1
 **/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *s = *head;
dlistint_t *t = *head;
unsigned int u;
unsigned int v = 0;
if (!(*head))
return (-1);
if (index == 0)
{
*head = t->next;
free(t);
if (*head)
(*head)->prev = NULL;
return (1);
}
u = index - 1;
while (s && v != u)
{
v++;
s = s->next;
}
if (v == u && s)
{
t = s->next;
if (t->next)
t->next->prev = s;
s->next = t->next;
free(t);
return (1);
}
return (-1);
}
