#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - Function that return the length of a string
 * @s: String
 * Return: The length of the string
 */
int _strlen(char *s)
{
int n;
n = 0;
while (s[n] != '\0')
{
n++;
}
return (n);
}
/**
 * _strcpy - Function that copies the string pointed to by src including
 * the terminationg null byte (\0) to the buffer pointed to by dest
 * @dest: From where we're going to copy the string
 * @src: The string to copy
 * Return: The pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int n, m;
n = 0;
while (src[n] != '\0')
{
n++;
}
for (m = 0 ; m < n ; m++)
{
dest[m] = src[m];
}
dest[m] = '\0';
return (dest);
}
/**
 * new_dog - Function that creates a new dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The dog's owner
 * Return: Pointer to the new dog (Success), otherise NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
int n, m;
n = _strlen(name);
m = _strlen(owner);
dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);
dog->name = malloc(sizeof(char) * (n + 1));
if (dog->name == NULL)
{
free(dog);
return (NULL);
}
dog->owner = malloc(sizeof(char) * (m + 1));
if (dog->owner == NULL)
{
free(dog);
free(dog->name);
return (NULL);
}
_strcpy(dog->name, name);
_strcpy(dog->owner, owner);
dog->age = age;
return (dog);
}
