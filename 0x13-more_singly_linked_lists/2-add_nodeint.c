#include "lists.h"
#include <string.h>

/**
* add_nodeint - Entry point (Adds nodes)
*
* @head: pointer
* @n: integer
* Return: pointer or NULL
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node;

new_node = *head;
*head = malloc(sizeof(listint_t));
if (*head == NULL)
return (NULL);

(*head)->n = n;
(*head)->next = new_node;

return (*head);
}
