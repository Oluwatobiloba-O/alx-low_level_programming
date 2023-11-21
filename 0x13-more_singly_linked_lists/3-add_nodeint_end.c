#include "lists.h"

/**
* add_nodeint_end - Entry point (add_nodeint_end)
*
* @head: pointer
* @n: integer
* Return: Address or NULL
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node, *recent;

new_node = malloc(sizeof(listint_t));
if (!new_node)
return (NULL);

new_node->n = n;
if (*head == NULL)
{
new_node->next = *head;
*head = new_node;
}
else
{
new_node->next = NULL;
recent = *head;
while (recent->next)
recent = recent->next;
recent->next = new_node;
}
return (new_node);
}
