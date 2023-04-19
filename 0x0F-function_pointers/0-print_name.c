#include "function_pointers.h"
/**
 * print_name - Function that prints a name
 * @name: The name we want to print
 * @f: input
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
f(name);
}
