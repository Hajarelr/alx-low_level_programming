#include "hash_tables.h"
/**
 * hash_table_get - Function that retrieves a value associated with the key
 * @ht: The hash table
 * @key: The key
 * Return: The value associated with the element or Null if key is not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int n = 0;
hash_node_t  *a;
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
