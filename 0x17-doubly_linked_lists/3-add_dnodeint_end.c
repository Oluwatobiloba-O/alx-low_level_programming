#include "lists.h"

/**
 * *add_dnodeint_end - Entry point (add_dnodeint_end)
 * @head: pointer to the head of the list
 * @n: integer
 * Return: NULL on failure and address of the new node on success
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *node_new = NULL, *end = NULL;

node_new = (dlistint_t *)malloc(sizeof(dlistint_t));
if (node_new == NULL)
{
return (NULL);
}
node_new->n = n;
node_new->prev = NULL;
node_new->next = NULL;

if (*head == NULL)
*head = end = node_new;
else
{
end = *head;
while (end->next != NULL)
{
end = end->next;
}
end->next = node_new;
node_new->prev = end;
end = node_new;
}

return (node_new);
}
