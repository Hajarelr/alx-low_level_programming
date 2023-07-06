#include "hash_tables.h"
/**
 * hash_table_delete - Function thath deletes a hash table
 * @ht: The hash table
 * Return: Void
 */
void hash_table_delete(hash_table_t *ht)
{
hash_node_t *a, *b;
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
