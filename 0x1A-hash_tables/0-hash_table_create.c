#include "hash_tables.h"
/**
 * hash_table_create - Function that creates a hash table
 * @size: The size of the array
 * Return: Pointer to the newly created hash table otherwise NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *n;
if (size == 0)
return (NULL);
n = calloc(1, sizeof(hash_table_t));
if (n == NULL)
return (NULL);
n->size = size;
n->array = calloc(size, sizeof(hash_node_t *));
if (n->array == NULL)
{
free(n);
return (NULL);
}
return (n);
}
