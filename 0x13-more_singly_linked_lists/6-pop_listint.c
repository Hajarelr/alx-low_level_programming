#include "lists.h"
/**
 * pop_listint - Function that deletes the head node of a listint_t linked
 * list and returns the head node's data (n)
 * @head: Pointer
 * Return: 0 if the linked list is empty
 */
int pop_listint(listint_t **head)
{
listint_t *s;
int o;
if (!head || !*head)
return (0);
o = (*head)->n;
s = (*head)->next;
free(*head);
*head = s;
return (o);
}
