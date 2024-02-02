#include "hash_tables.h"

/**
 * hash_table_create - create hash table
 * @size: size of hash table
 * Return: pointer to the hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *h_table = NULL;
unsigned long int x = 0;

h_table = (hash_table_t *)malloc(sizeof(hash_table_t));
if (h_table == NULL)
return (NULL);
h_table->size = size;
h_table->array = (hash_node_t **)calloc(h_table->size, sizeof(hash_node_t *));
if (h_table->array == NULL)
{
free(h_table);
return (NULL);
}

while (x < h_table->size)
{
h_table->array[x] = NULL;
x++;
}

return (h_table);
}
