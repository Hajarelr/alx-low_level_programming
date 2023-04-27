#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - Function that adds a new node at the end of a list_t list
 * @head: The head of the linked list
 * @str: The string to store in the list
 * Return: The address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *n, *m;
size_t o;
n = malloc(sizeof(list_t));
if (n == NULL)
return (NULL);
n->str = strdup(str);
for (o = 0 ; str[o] ; o++)
;
n->len = o;
n->next = NULL;
m = *head;
if (m == NULL)
{
*head = n;
}
else
{
while (n->next != NULL)
m = m->next;
m->next = n;
}
return (*head);
}
