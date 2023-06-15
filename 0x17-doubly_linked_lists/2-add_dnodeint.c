#include "lists.h"
/**
 * add_dnodeint - Function that adds a new node at the beginning of a
 * dlistint_t list
 * @head: 1st input
 * @n: 2nd input
 * Return: The address of the new element,it it failed NULL
 **/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *e;
e = malloc(sizeof(dlistint_t));
if (e == NULL)
return (NULL);
e->n = n;
e->prev = NULL;
e->next = *head;
if (*head)
(*head)->prev = e;
*head = e;
return (e);
}
