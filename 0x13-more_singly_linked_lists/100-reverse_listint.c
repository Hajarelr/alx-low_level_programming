#include "lists.h"
/**
 * reverse_listint - Function that reverses a listint_t linked list
 * @head: Pointer
 * Return: A pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *a = NULL;
listint_t *b = NULL;
while (*head)
{
b = (*head)->next;
(*head)->next = a;
a = *head;
*head = b;
}
*head = a;
return (*head);
}
