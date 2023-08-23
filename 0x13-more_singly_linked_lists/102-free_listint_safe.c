#include "lists.h"
/**
 * free_listint_safe - Function that frees a listint_t list
 * @h: Pointer
 * Return: The size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
size_t a = 0;
int b;
listint_t *c;
if (!h || !*h)
return (0);
while (*h)
{
b = *h - (*h)->next;
if (b > 0)
{
c = (*h)->next;
free(*h);
*h = c;
a++;
}
else
{
free(*h);
*h = NULL;
a++;
break;
}
}
*h = NULL;
return (a);
}
