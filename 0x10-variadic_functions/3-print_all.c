#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - Function that prints anything
 * @format: List of types of arguments passed to the function
 * Return: void
 */
void print_all(const char * const format, ...)
{
int n = 0;
char *m, *o = "";
va_list p;
va_start(p, format);
if (format)
{
while (format[n])
{
switch (format[n])
{
case 'c':
printf("%s%c", o, va_arg(p, int));
break;
case 'i':
printf("%s%d", o, va_arg(p, int));
break;
case 'f':
printf("%s%f", o, va_arg(p, double));
break;
case 's':
m = va_arg(p, char *);
if (!m)
m = "(nil)";
printf("%s%s", o, m);
break;
default:
n++;
continue;
}
o = ", ";
n++;
}
}
printf("\n");
va_end(p);
}
