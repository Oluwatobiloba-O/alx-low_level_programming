#include "hash_tables.h"

/**
 * hash_table_print - prints the hash table
 * @ht: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
unsigned long int x;
unsigned long int num = 0;
hash_node_t *tmp = NULL;

if (ht != NULL)
{
printf("{");

for (x = 0; x < ht->size; x++)
{
tmp = ht->array[x];
while (tmp)
{
if (num > 0)
{
printf(", ");
}
printf("'%s': '%s'", tmp->key, tmp->value);

tmp = tmp->next;
num++;
}
}
printf("}\n");
}
}
