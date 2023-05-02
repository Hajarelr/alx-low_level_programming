#include "lists.h"
/**
 * insert_nodeint_at_index - Function that inserts a new node in a
 * linked list
 * @head: Pointer
 * @idx: The index of the list where the new node should be added,
 * it starts at 0
 * @n: Input
 * Return: The address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int a;
listint_t *b;
listint_t *c = *head;
b = malloc(sizeof(listint_t));
if (!b || !head)
return (NULL);
b->n = n;
b->next = NULL;
if (idx == 0)
{
b->next = *head;
*head = b;
return (b);
}
for (a = 0 ; c && a < idx ; a++)
{
if (a == idx - 1)
{
b->next = c->next;
c->next = b;
return (b);
}
else
c = c->next;
}
return (NULL);
}
