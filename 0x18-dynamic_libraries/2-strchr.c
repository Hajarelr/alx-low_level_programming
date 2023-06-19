#include <stdio.h>
#include "main.h"
/**
 * _strchr - Function that locates a character in a string
 * @s: String
 * @c: Character
 * Return: 0 (Success)
 */
char *_strchr(char *s, char c)
{
int n;
for (n = 0 ; s[n] >= '\0' ; n++)
{
if (s[n] == c)
return (s + n);
}
return (NULL);
}
