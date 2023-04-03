#include "main.h"
#include <stdio.h>
/**
 * _strstr - Function that locates a substring
 * @haystack: String
 * @needle: Substring
 * Return: 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0' ; haystack++)
{
char *n = haystack;
char *m = needle;
while (*n == *m && *m != '\0')
{
n++;
m++;
}
if (*m == '\0')
return (haystack);
}
return (NULL);
}
