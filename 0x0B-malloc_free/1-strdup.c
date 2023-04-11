#include "main.h"
#include <stdlib.h>
/**
 * _strdup - Function that returns a pointer to a newly allocated space
 * in memory which contains a copy of the string given as a parameter
 * @str: The string to copy
 * Return: The copied string, NULL if str = NULL
 */
char *_strdup(char *str)
{
int n = 0, m = 1;
char *o;
if (str == NULL)
return (NULL);
while (str[m])
{
m++;
}
o = malloc((sizeof(char) * m) +1);
if (o == NULL)
return (NULL);
while (n < m)
{
o[n] = str[n];
n++;
}
o[n] = '\0';
return (o);
}
