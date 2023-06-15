#include "lists.h"
/**
 * get_dnodeint_at_index - Function that returns the nth node of a dlistint_t
 * linked list
 * @head: 1st input
 * @index: 2nd input
 * Return: NULL if the node does not exist
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *j = head;
unsigned int k = 0;
while (j && k != index)
{
k++;
j = j->next;
}
if (j && k == index)
return (j);
return (NULL);
}
