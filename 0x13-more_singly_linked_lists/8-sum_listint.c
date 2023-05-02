#include "lists.h"
/**
 * sum_listint - Function that returns the sum of all the data (n) of
 * a listint_t linked list
 * @head: Input
 * Return: 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
int a = 0;
listint_t *b = head;
while (b)
{
a += b->n;
b = b->next;
}
return (a);
}
