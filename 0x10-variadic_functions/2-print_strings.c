#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - Function that print strings
 * @separator: Th string to be printed
 * @n: The number of strings passed to th function
 * @...: A variable number of strings to be printed
 * if separator is NULL, nothing to be printed, if one of the strings
 * is NULL, print nil instead
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list s;
char *t;
unsigned int u;
va_start(s, n);
for (u = 0 ; u < n ; u++)
{
t = va_arg(s, char *);
if (t == NULL)
printf("(nil)");
else
printf("%s", t);
if (u != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(s);
}
