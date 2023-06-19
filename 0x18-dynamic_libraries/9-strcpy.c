#include "main.h"
/**
 * *_strcpy - Function that copies the string
 * @dest: Destination value
 * @src: Source value
 * Return: String
 */
char *_strcpy(char *dest, char *src)
{
int n;
for (n = 0 ; src[n] != '\0' ; n++)
{
dest[n] = src[n];
}
dest[n++] = '\0';
return (dest);
}
