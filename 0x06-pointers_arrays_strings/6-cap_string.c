#include "main.h"
/**
 * cap_string - Function that capitalizes all words of a string
 * @str: The string to be capitalized
 * Return: A pointer to string
 */
char *cap_string(char *str)
{
int m = 0;
while (str[m])
{
while (!(str[m] >= 'a' && str[m] <= 'z'))
m++;
if (str[m - 1] == ' ' ||
str[m - 1] =='\t' ||
str[m - 1] =='\n' ||
str[m - 1] == ',' ||
str[m - 1] == ';' ||
str[m - 1] == '.' ||
str[m - 1] == '!' ||
str[m - 1] == '?' ||
str[m - 1] == '"' ||
str[m - 1] == '(' ||
str[m - 1] == ')' ||
str[m - 1] == '{' ||
str[m - 1] == '}' ||
m == 0)
str[m] -= 32;
m++;
}
return (str);
}
