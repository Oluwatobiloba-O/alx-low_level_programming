#include "hash_tables.h"

/**
 * create_item - allocates memory to the key
 * @key: key
 * @value: value
 * Return: item
 */

hash_node_t *create_item(char *key, char *value)
{
hash_node_t *item = NULL;

item = (hash_node_t *)malloc(sizeof(hash_node_t));
if (item == NULL)
return (NULL);

item->key = (char *)malloc(strlen(key) + 1);
if (item->key == NULL)
{
free(item);
return (NULL);
}

item->value = (char *)malloc(strlen(value) + 1);
if (item->value == NULL)
{
free(item->key);
free(item);
return (NULL);
}

strcpy(item->key, key);
strcpy(item->value, value);
item->next = NULL;

return (item);
}

/**
 * hash_table_set -  adds data to hash table
 * @ht: hash table
 * @key: key - cannot be an empty string.
 * @value: value
 * Return: 1 or 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int index;
hash_node_t *pool = NULL, *new_node = NULL, *tmp = NULL;
const char *value_d = strdup(value);

if (key == NULL || *key == '\0')
return (0);
if (ht == NULL)
return (0);
index = key_index((const unsigned char *)key, ht->size);
pool = ht->array[index];
if (pool == NULL)
{
pool = create_item((char *)key, (char *)value_d);
if (pool == NULL)
return (0);
ht->array[index] = pool;
}
else
{
tmp = ht->array[index];
while (tmp != NULL)
{
if (strcmp(tmp->key, key) == 0)
{
free(tmp->value);
tmp->value = (char *)value_d;
if (tmp->value == NULL)
return (0);
return (1);
}
tmp = tmp->next;
}
new_node = create_item((char *)key, (char *)value_d);
if (new_node == NULL)
return (0);
new_node->next = pool;
ht->array[index] = new_node;
}
free((void *)value_d);
return (1);
}
