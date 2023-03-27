#include "main.h"
/**
 * char_strcpy - Function that copies the string
 * @dest: Destination value
 * @src: Source value
 * return: the pointer to dest
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
