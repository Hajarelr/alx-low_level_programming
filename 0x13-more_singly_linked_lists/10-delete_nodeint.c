#include "lists.h"
/**
 * delete_nodeint_at_index - Function that deletes the node at the index
 * of a listint_t linked list
 * @head: Pointer
 * @index: The index of the node that should be deleted. It starts at 0
 * Return: 1 if it succeeded and -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *a = *head;
listint_t *b = NULL;
unsigned int c = 0;
if (*head == NULL)
return (-1);
if (index == 0)
{
*head = (*head)->next;
free(a);
return (1);
}
while (c < index - 1)
{
if (!a || !(a->next))
return (-1);
a = a->next;
c++;
}
b = a->next;
a->next = b->next;
free(b);
return (1);
}
