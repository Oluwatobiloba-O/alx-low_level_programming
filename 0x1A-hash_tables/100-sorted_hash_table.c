#include "hash_tables.h"

/**
 * shash_table_create - create hash table
 * @size: size of hash table
 * Return: pointer to hash table
 */

shash_table_t *shash_table_create(unsigned long int size)
{
shash_table_t *h_table = NULL;
unsigned long int x = 0;

h_table = (shash_table_t *)malloc(sizeof(shash_table_t));
if (h_table == NULL)
return (NULL);
h_table->size = size;

h_table->array = (shash_node_t **)calloc(h_table->size, sizeof(shash_node_t *));
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

h_table->shead = NULL;
h_table->stail = NULL;

return (h_table);
}

/**
 * create_sorted_item - Entry point
 * @key: The key, string
 * @value: value
 * Return: item
 */

shash_node_t *create_sorted_item(char *key, char *value)
{
shash_node_t *item = NULL;

item = (shash_node_t *)malloc(sizeof(shash_node_t));
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
item->sprev = NULL;
item->snext = NULL;

return (item);
}

/**
 * insert_to_sll - Entry point
 * @shead: head of the list
 * @new_node: new_node
 */

void insert_to_sll(shash_node_t **shead, shash_node_t *new_node)
{
shash_node_t *cur = NULL;
shash_node_t *prev = NULL;

cur = *shead;
while (cur != NULL && strcmp(cur->key, new_node->key) < 0)
{
prev = cur;
cur = cur->snext;
}
new_node->snext = cur;
new_node->sprev = prev;

if (prev == NULL)
{
*shead = new_node;
}
else
prev->snext = new_node;
if (cur != NULL)
cur->sprev = new_node;
}

/**
 * shash_table_set -  adds data to the hash table
 * @ht: hash table
 * @key: key - cannot be an empty string
 * @value: value
 * Return: 1 or 0
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
unsigned long int index;
shash_node_t *new_node = NULL;
const char *value_d = strdup(value);

if (key == NULL || *key == '\0')
return (0);
if (ht == NULL)
return (0);
index = key_index((const unsigned char *)key, ht->size);

new_node = create_sorted_item((char *)key, (char *)value_d);
if (new_node == NULL)
return (0);

insert_to_sll(&(ht->shead), new_node);

ht->stail = new_node;

new_node->next = ht->array[index];
ht->array[index] = new_node;

return (1);
}

/**
 * shash_table_get - Entry point
 * @ht:  hash table
 * @key:  key
 * Return:  value or NULL if
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
shash_node_t *cur = NULL;
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

/**
 * shash_table_print - prints the hash table
 * @ht: hash table
 */

void shash_table_print(const shash_table_t *ht)
{
unsigned long int num = 0;
shash_node_t *tmp = ht->shead;

if (ht != NULL)
{
printf("{");
while (tmp != NULL)
{
if (num > 0)
{
printf(", ");
}
printf("'%s': '%s'", tmp->key, tmp->value);
tmp = tmp->snext;
num++;
}
printf("}\n");
}
}

/**
 * shash_table_print_rev - prints a hash table
 * @ht: hash table
 */

void shash_table_print_rev(const shash_table_t *ht)
{
unsigned long int num = 0;
shash_node_t *tmp = ht->stail;

if (ht != NULL)
{
printf("{");
while (tmp != NULL)
{
if (num > 0)
printf(", ");
printf("'%s': '%s'", tmp->key, tmp->value);
tmp = tmp->sprev;
num++;
}
printf("}\n");
}
}

/**
 * shash_table_delete - deletes the hash table.
 * @ht: hash table
 */

void shash_table_delete(shash_table_t *ht)
{
unsigned long int x;
shash_node_t *tmp = NULL;
shash_node_t *cur = NULL;

if (ht == NULL)
return;

for (x = 0; x < ht->size; x++)
{
cur = ht->array[x];
while (cur)
{
tmp = cur;
cur = cur->next;
free(tmp->key);
free(tmp->value);
free(tmp);
}
}

free(ht->array);
free(ht);
}
