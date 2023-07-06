#include "hash_tables.h"
/**
 * hash_table_set - Function that adds an element to the hash table
 * @ht: The hash table to add or update the key/value to
 * @key: The key (Canno't be an empty string)
 * @value: The value associated with the key (canno't be empty) must be
 * duplicated
 * Return: 1 on succes otherwise 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int n = 0;
char *a, *b;
hash_node_t *c, *d;
if (!ht || !key || !*key || !value)
return (0);
a = strdup(value);
if (!a)
return (0);

n = key_index((const unsigned char *)key, ht->size);
c = ht->array[n];
while (c)
{
if (!strcmp(key, c->key))
{
free(c->value);
c->value = a;
return (1);
}
c = c->next;
}
d = calloc(1, sizeof(hash_node_t));
if (d == NULL)
{
free(a);
return (0);
}
b = strdup(key);
if (!b)
return (0);
d->key = b;
d->value = a;
d->next = ht->array[n];
ht->array[n] = d;
return (1);
}
