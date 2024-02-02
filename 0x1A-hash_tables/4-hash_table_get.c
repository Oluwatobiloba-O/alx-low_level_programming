#include "hash_tables.h"

/**
 * hash_table_get - Entry point
 * @ht:  hash table
 * @key:  key
 * Return:  value or NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
hash_node_t *cur = NULL;
unsigned long int index;

if (key == NULL)
return (NULL);

if (ht == NULL)
return (NULL);

index = key_index((const unsigned char *)key, ht->size);
cur = ht->array[index];
while (cur != NULL)
{
if (strcmp(cur->key, key) == 0)
{
return (cur->value);
}
cur = cur->next;
}

return (NULL);
}
