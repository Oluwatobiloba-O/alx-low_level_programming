#include "hash_tables.h"

/**
 * free_items - frees the key
 * @tmp: tmp
 */

void free_items(hash_node_t *tmp)
{
free(tmp->key);
free(tmp->value);
free(tmp);
}


/**
 * hash_table_delete - deletes the hash table.
 * @ht: hash table
 */

void hash_table_delete(hash_table_t *ht)
{
unsigned long int x;
hash_node_t *tmp = NULL;
hash_node_t *cur = NULL;

if (ht == NULL)
return;

for (x = 0; x < ht->size; x++)
{
cur = ht->array[x];
while (cur)
{
tmp = cur;
cur = cur->next;
free_items(tmp);
}
}

free(ht->array);
free(ht);
}
