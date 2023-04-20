#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - Function that prints numbers
 * @separator: The string to be printed
 * @n: The number of integers
 * @...: Variable number of numbers we're gonna print
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list m;
unsigned int o;
va_start(m, n);
for (o = 0 ; o < n ; o++)
{
printf("%d", va_arg(m, int));
if (o != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(m);
}
