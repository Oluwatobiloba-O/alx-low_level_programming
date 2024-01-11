#include "lists.h"

/**
 * add_dnodeint - Entry point (add_dnodeint)
 * @head: pointer to the head of the list
 * @n: integer
 * Return: NULL on failure
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *node_new = NULL;

node_new = (dlistint_t *)malloc(sizeof(dlistint_t));
if (node_new == NULL)
{
return (NULL);
}
node_new->n = n;
node_new->prev = NULL;
node_new->next = *head;
if (*head != NULL)
(*head)->prev = node_new;
*head = node_new;

return (node_new);
}
