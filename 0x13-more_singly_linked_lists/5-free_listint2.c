#include "lists.h"
/**
 * free_listint2 - Function that frees a listint_t list (Sets head to NULL)
 * @head: Pointer
 * Return: Void
 */
void free_listint2(listint_t **head)
{
listint_t *s;
if (head == NULL)
return;
while (*head)
{
s = (*head)->next;
free(*head);
*head = s;
}
head = NULL;
}
