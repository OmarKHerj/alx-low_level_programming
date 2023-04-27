#include "lists.h"
/**
 * add_node - adds a new node at the beginning
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *xp;
size_t numchar;

xp = malloc(sizeof(list_t));
if (xp == NULL)
return (NULL);

xp->str = strdup(str);

for (numchar = 0; str[numchar]; numchar++)
;

xp->len = numchar;
xp->next = *head;
*head = xp;

return (*head);
}
