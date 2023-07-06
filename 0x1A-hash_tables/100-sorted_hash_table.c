#include "hash_tables.h"
/**
 * sorted_list - Function to insert new node in sorted
 * @ht: Pointer
 * @new_node: The node
 * Return: Void
 */
void sorted_list(shash_table_t *ht, shash_node_t *new_node)
{
shash_node_t *a = ht->shead;

if (a == NULL)
{
ht->shead = ht->stail = new_node;
new_node->snext = new_node->sprev = NULL;
return;
}
do {
if (strcmp(new_node->key, a->key) < 0)
{
new_node->snext = a;
new_node->sprev = a->sprev;

if (!a->sprev)
ht->shead = new_node;
else
a->sprev->snext = new_node;
a->sprev = new_node;
return;
}
a = a->snext;
} while (a);
new_node->sprev = ht->stail;
new_node->snext = ht->stail->snext;
ht->stail->snext = new_node;
ht->stail = new_node;
}
/**
 * shash_table_create - Function that creates a sorted hash tables
 * @size: The size of the hash table
 * Return: The pointer to hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
shash_table_t *n;
if (size == 0)
return (NULL);
n = calloc(1, sizeof(shash_table_t));
if (n == NULL)
return (NULL);
n->size = size;
n->array = calloc(size, sizeof(shash_node_t *));
if (n->array == NULL)
{
free(n);
return (NULL);
}
return (n);
}
/**
 * shash_table_set - Function that adds an element to the shash table
 * @ht: The shash table to add or update the key/value to
 * @key: The key (Canno't be an empty string)
 * @value: The value associated with the key (canno't be empty) must be
 * duplicated
 * Return: 1 on succes otherwise 0
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
unsigned long int n = 0;
char *a, *b;
shash_node_t *c, *d;
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
d = calloc(1, sizeof(shash_node_t));
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
sorted_list(ht, d);
return (1);
}
/**
 * shash_table_get - Function that retrieves a value associated with the key
 * @ht: The shash table
 * @key: The key
 * Return: The value associated with the element or Null if key is not found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
unsigned long int n = 0;
shash_node_t  *a;
if (!ht || !key || !*key)
return (NULL);
n = key_index((const unsigned char *)key, ht->size);
a = ht->array[n];
while (a)
{
if (!strcmp(key, a->key))
return (a->value);
a = a->next;
}
return (NULL);
}
/**
 * shash_table_print - Function that prints a shash table
 * @ht: The shash table
 * Return: Void
 */
void shash_table_print(const shash_table_t *ht)
{
unsigned long int n = 0;
shash_node_t  *a;
int b = 0;
if (!ht)
return;
printf("{");
for (n = 0; n < ht->size; n++)
{
a = ht->array[n];
while (a)
{
if (b)
printf(", ");
printf("'%s': '%s'", a->key, a->value);
b = 1;
a = a->next;
}
}
printf("}\n");
}
/**
 * shash_table_print_rev - Function that prints the key/value from ht in reverse
 * @ht: Pointer to shash table
 * Return: Void
 */
void shash_table_print_rev(const shash_table_t *ht)
{
shash_node_t *a;
int b = 0;
if (!ht)
return;
a = ht->stail;
printf("{");
while (a)
{
if (b)
printf(", ");
printf("'%s': '%s'", a->key, a->value);
b = 1;
a = a->sprev;
}
printf("}\n");
}
/**
 * shash_table_delete - Function thath deletes a shash table
 * @ht: The shash table
 * Return: Void
 */
void shash_table_delete(shash_table_t *ht)
{
shash_node_t *a, *b;
unsigned long int n = 0;
if (!ht)
return;

for (n = 0; n < ht->size; n++)
{
a = ht->array[n];
while (a)
{
b = a;
a = a->next;
if (b->key)
free(b->key);
if (b->value)
free(b->value);
free(b);
}
}
free(ht->array);
free(ht);
}
