#include "lists.h"
/**
 * get_nodeint_at_index - Function that returns the nth node of a listint_t
 * linked list
 * @head: input 1
 * @index: Index of the node, strating at 0
 * Return: NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int m = 0;
listint_t *s = head;
while (s && m < index)
{
s = s->next;
m++;
}
return (s ? s : NULL);
}
