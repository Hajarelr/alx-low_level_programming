#include "main.h"
#include <stdlib.h>
/**
 * word_len - Function that locates the index marking the end of the
 * firt word contained within a string
 * @str: The string we're looking for
 * Return: The index marking...
 */
int word_len(char *str)
{
int n = 0, m = 0;
while (*(str + n) && *(str + n) != ' ')
{
m++;
n++;
}
return (m);
}

/**
 * count_words - Function that counts the number of words in a string
 * @str: The string we're looking for
 * Return: Number of words in the string
 */
int count_words(char *str)
{
int n = 0, m = 0, o = 0;
for (n = 0 ; *(str + n) ; n++)
o++;
for (n = 0 ; n < o ; n++)
{
if (*(str + n) != ' ')
{
m++;
n += word_len(str + n);
}
}
return (m);
}

/**
 * strtow - Function that splits into words
 * @str: The string that we wanna split
 * Return: NULL if str = NULL or str = "" or when it fail / A pointer
 * to an array of strings (words)
 */
char **strtow(char *str)
{
char **n;
int m = 0, o, p, q, r;
if (str == NULL || str[0] == '\0')
return (NULL);
o = count_words(str);
if (o == 0)
return (NULL);
n = malloc(sizeof(char *) * (o + 1));
if (n == NULL)
return (NULL);
for (p = 0 ; p < o ; p++)
{
while (str[m] == ' ')
m++;
q = word_len(str + m);
n[p] = malloc(sizeof(char) * (q + 1));
if (n[p] == NULL)
{
for (; p >= 0 ; p--)
free(n[p]);
free(n);
return (NULL);
}
for (r = 0 ; r < q ; r++)
n[p][r] = str[m++];
n[p][r] = '\0';
}
n[p] = NULL;
return (n);
}
