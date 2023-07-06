#include "hash_tables.h"
/**
 * hash_table_print - Function that prints a hash table
 * @ht: The hash table
 * Return: Void
 */
void hash_table_print(const hash_table_t *ht)
{
unsigned long int n = 0;
hash_node_t  *a;
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
