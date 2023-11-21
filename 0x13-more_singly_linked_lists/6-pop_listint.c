#include "lists.h"

/**
* pop_listint - Entry point (pop_listint)
*
* @head: pointer list
* Return: x or NULL
*/
int pop_listint(listint_t **head)
{
int x;
listint_t *del_node;

if (!*head)
return (0);

del_node = (*head)->next;
x = (*head)->n;
free(*head);
*head = del_node;
return (x);
}
