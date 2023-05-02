#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 *
 * @head: head of a list.
 * @idx: index of the list where the new node is added
 *
 * @n: integer element.
 *
 * Return: the address of the new node, or NULL if it
 * failed.
 */
istint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int x;
listint_t *tmp, *new_one;

if (head == NULL)
return (NULL);
if (idx != 0)
{
tmp = *head;
for (x = 0; x < idx - 1 && tmp != NULL; x++)
{
tmp = tmp->next;
}
if (tmp == NULL)
return (NULL);
}
new_one = malloc(sizeof(listint_t));
if (new_one == NULL)
return (NULL);
new_one->n = n;
if (idx == 0)
{
new_one->next = *head;
*head = new_one;
return (new_one);
}
new_one->next = tmp->next;
tmp->next = new_one;
return (new_one);
}
