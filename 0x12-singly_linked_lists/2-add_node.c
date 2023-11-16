#include <string.h>
#include "lists.h"

/**
* add_node - adds a new node at the beginning of a linked list
*
* @head: double pointer
* @str: string pointer 
* Return: Address or Null
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *new;
unsigned int len = 0;

while (str[len])
len++;

new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);

new->len = len;
new->str = strdup(str);
new->next = (*head);
(*head) = new;

return (new);
}
