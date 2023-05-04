#include "main.h"
/**
 * get_endianness - Function that checks the endianness
 * Return: 0 if big endian or 1 if little endian
 */
int get_endianness(void)
{
int n = 1;
char *m = (char *)&n;
if (*m == 1)
return (1);
return (0);
}
