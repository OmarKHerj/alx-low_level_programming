#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: head of a list
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
listint_t *first;

if (head == NULL)
return;
while (*head != NULL)
{
first = (*head)->next;
free(*head);
*head = first;
}
}
