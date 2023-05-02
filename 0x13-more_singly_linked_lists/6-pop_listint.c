#include "lists.h"


/**
 * pop_listint - deletes the head node of a linked list
 * @head: head of a list.
 *
 *Return: x
 */
int pop_listint(listint_t **head)
{
	listint_t *first;
	int x;

	if (*head == NULL)
		return (0);
	first = *head;
	*head = first->next;
	x = first->x;
	free(first);
	return (x);
}
