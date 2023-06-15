#include "lists.h"
/**
 * print_dlistint - Function that prints all the elements of a dlistint_t list
 * @h: Input
 * Return: The number of nodes
 **/
size_t print_dlistint(const dlistint_t *h)
{
const dlistint_t *a = h;
size_t b = 0;
while (a)
{
printf("%i\n", a->n);
b++;
a = a->next;
}
return (b);
}
