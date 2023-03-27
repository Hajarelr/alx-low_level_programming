#include "main.h"
/**
 * rev_string - Function that reverses a string
 * @s: string
 * return: string in reverse
 */
void rev_string(char *s)
{
char rev = s[0];
int m = 0;
int n;
while (s[m] != '\0')
m++;
for (n = 0 ; n < m ; n++)
{
m--;
rev = s[n];
s[n] = s[m];
s[m] = rev;
}
}
