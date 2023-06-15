#include "lists.h"
/**
 * sum_dlistint - Function that returns the sum of all the data(n) of a
 * dlistint_t list
 * @head: 1st input
 * Return: 0 if the list is empty
 **/
int sum_dlistint(dlistint_t *head)
{
dlistint_t *l = head;
int m = 0;
while (l)
{
m += l->n;
l = l->next;
}
return (m);
}
