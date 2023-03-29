#include "main.h"
#include <stdio.h>
/**
 * rot13 - Function that encodes a string using rot13
 * @s: pointer to string parameters
 * Return: *s
 */
char *rot13(char *s)
{
int m;
int o;
char l[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char k[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (m = 0 ; s[m] != '\0' ; m++)
{
for (o = 0 ; o < 52 ; o++)
{
if (s[m] == l[o])
{
s[m] = k[o];
break;
}
}
}
return (s);
}
