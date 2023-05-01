#include "lists.h"
/**
 * add_nodeint_end - Function that adds a new node at the end of listint_t list
 * @head: Pointer to the adress of the head of the listint_t
 * @n: Integer
 * Return: The address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *l, *m;
l = malloc(sizeof(listint_t));
if (l == NULL)
return (NULL);
l->n = n;
l->next = NULL;
if (*head == NULL)
*head = l;
else
{
m = *head;
while (m->next != NULL)
m = m->next;
m->next = l;
}
return (*head);
}
