#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - Function that adds the new node at the beginning of list_t list
 * @head: The linked list
 * @str: The string we're gonna add to the node
 * Return: The address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *n;
int m = 0;
n = malloc(sizeof(list_t));
if (n == NULL)
return (NULL);
while (str[m])
m++;
n->len = m;
n->str = strdup(str);
n->next = *head;
*head = n;
return (n);
}

