#include "lists.h"
#include <string.h>

/**
* add_node_end - adds a node
*
* @head: pointer
* @str: string pointer
* Return: Address or Null
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *node, *temp;
unsigned int len = 0;

node = malloc(sizeof(list_t));
if (node == NULL)
return (NULL);

while (str[len])
len++;

node->len = len;
node->str = strdup(str);
if (*head == NULL)
{
node->next = *head;
*head = node;
}
else
{
node->next = NULL;
temp = *head;
while (temp->next)
temp = temp->next;
temp->next = node;
}
return (node);
}
