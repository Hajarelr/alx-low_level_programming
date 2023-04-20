#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Function that returns the sum of all its parameters
 * @n: Number of parameters
 * @...: Variable number of parameters
 * Return: 0 if n = 0
 */
int sum_them_all(const unsigned int n, ...)
{
va_list m;
unsigned int o, p = 0;
va_start(m, n);
for (o = 0 ; o < n ; o++)
p += va_arg(m, int);
va_end(m);
return (p);
}
