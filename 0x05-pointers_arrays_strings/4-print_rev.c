#include "main.h"
/**
 * print_rev - Fucntion that prints a string in reverse
 * @s: string
 * return 0
 */
void print_rev(char *s)
{
int longi = 0;
int n;
while (*s != '\0')
{
longi++;
s++;
}
s--;
for (n = longi; n > 0; n--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
