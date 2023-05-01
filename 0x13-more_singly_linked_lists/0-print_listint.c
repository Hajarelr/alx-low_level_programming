#include "lists.h"
#include <stdio.h>
/**
 * print_listint - Function that prints all the elements of linstint_t list
 * @h: Pointer
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t m = 0;
while (h)
{
m++;
printf("%d\n", h->n);
h = h->next;
}
return (m);
}
