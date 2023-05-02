#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end
 * of a linked list
 * @head: head of a list.
 * @n: n element.
 *
 * Return: address of the new element and  NUll if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *first;
listint_t *temp;

if (head == NULL)
return (NULL);
first = malloc(sizeof(listint_t));
if (first == NULL)
return (NULL);
first->n = n;
first->next = NULL;
if (*head == NULL)
{
*head = first;
return (first);
}
temp = *head;
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = first;
return (first);
}
