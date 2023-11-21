#include "lists.h"

/**
* reverse_listint - Entry point (reverse_listint)
*
* @head: pointer
* Return: pointer
*/
listint_t *reverse_listint(listint_t **head)
{
listint_t *old = NULL, *next = NULL;
while (*head)
{
next = (*head)->next;
(*head)->next = old;
old = *head;
*head = next;
}
*head = old;
return (*head);
}
