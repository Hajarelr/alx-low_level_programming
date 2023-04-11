#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - Function that cincatenates all the arguments of the program
 * @ac: 1st argument
 * @av: 2nd argument
 * Return: NULL if ac == 0 or av == NULL, a pointer or NULL if failed
 */
char *argstostr(int ac, char **av)
{
int n = 0, m = 0, o = 0, p = 0;
char *q;
if (ac == 0 || av == NULL)
return (NULL);
while (m < ac)
{
while (av[m][o])
{
n++;
o++;
}
o = 0;
m++;
}
q = malloc((sizeof(char) * n) +ac + 1);
m = 0;
while (av[m])
{
while (av[m][o])
{
q[p] = av[m][o];
p++;
o++;
}
q[p] = '\n';
o = 0;
p++;
m++;
}
p++;
q[p] = '\0';
return (q);
}
