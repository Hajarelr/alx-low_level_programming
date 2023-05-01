#include "lists.h"
/**
 * add_nodeint - Function that adds a new node at the beginning
 * of a listint_t list
 * @head: Pointer to the adress of the head of the list
 * @n: Integer
 * Return: The address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *l;
l = malloc(sizeof(listint_t));
if (l == NULL)
return (NULL);
l->n = n;
l->next = *head;
*head = l;
return (l);
}
