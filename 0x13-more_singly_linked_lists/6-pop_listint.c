#include "lists.h"


/**
 * pop_listint - deletes the head node of a linked list
 * @head: head of a list.
 *
 *Return: x
 */
int pop_listint(listint_t **head)
{
listint_t *new;
int x = 0;

if (*head != NULL)
{
new = (*head)->next;
x = (*head)->n;
free(*head);
*head = new;
}

return (x);
}
