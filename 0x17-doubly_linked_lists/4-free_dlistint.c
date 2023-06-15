#include "lists.h"
/**
 * free_dlistint - Function that frees a dlistint_t list
 * @head: Input
 * Return: Void
 **/
void free_dlistint(dlistint_t *head)
{
dlistint_t *h;
dlistint_t *i;
if (head)
{
h = head;
i = head->next;
while (i)
{
free(h);
h = i;
i = i->next;
}
free(h);
}
}
