#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - Function that initialize a variable of type struct dog
 * @d: The pointer to struct dog to be initialized
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner's dog
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
d = malloc(sizeof(struct dog));
d->name = name;
d->age = age;
d->owner = owner;
}
