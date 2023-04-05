#include "main.h"
/**
 * _strlen_recursion - Function that returns the length of a string
 * @s: String
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
else
return (1 + _strlen_recursion(s + 1));
}
/**
 * comparator - Function that compares each character of the string
 * @s: String
 * @n: Smallest iterator
 * @m: Biggest iterator
 * Return: 0
 */
int comparator(char *s, int n, int m)
{
if (*(s + n) == *(s + m))
{
if (n == m || n == m + 1)
return (1);
return (0 + comparator(s, n + 1, m - 1));
}
return (0);
}
/**
 * is_palindrome - Function that returns 1 if a string is a palindrome
 * and 0 if not
 * @s: String
 * Return: 1 if is is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
if (*s == '\0')
return (1);
return (comparator(s, 0, _strlen_recursion(s) - 1));
}
