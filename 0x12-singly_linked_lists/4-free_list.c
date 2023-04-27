#include "lists.h"
#include <stdlib.h>
/**
 * free_list - Function that frees a list_t list
 * @head: The head of the linked list
 * Return: void
 */
void free_list(list_t *head)
{
list_t *m;
while ((m = head) != NULL)
{
head = head->next;
free(m->str);
free(m);
}
}
