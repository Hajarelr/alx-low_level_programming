#include "main.h"
/**
 * puts2 - Function that prints every other character of a string
 * starting with the first character
 * @str: input
 * return : print
 */
void puts2(char *str)
{
int n = 0;
int m = 0;
char *o = str;
int p;
while (*o != '\0')
{
o++;
n++;
}
m = n - 1;
for (p = 0 ; p <= m ; p++)
{
if (p % 2 == 0)
{
_putchar(str[p]);
}
}
_putchar('\n');
}
