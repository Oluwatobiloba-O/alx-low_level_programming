#include "lists.h"

/**
* insert_nodeint_at_index - Entry point ()
*
* @head: pointer
* @idx: index
* @n: integer
* Return: node or NULL
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int x = 0;
listint_t *add_node, *recent;

if (!*head)
return (NULL);

add_node = malloc(sizeof(listint_t));
if (add_node == NULL)
return (NULL);

add_node->n = n;
recent = *head;

if (idx == 0)
{
add_node->next = recent;
*head = add_node;
return (add_node);
}

while (x < idx - 1)
{
if (recent == NULL)
{
free(add_node);
return (NULL);
}
recent = recent->next;
x++;
}

add_node->next = recent->next;
recent->next = add_node;

return (add_node);
}
