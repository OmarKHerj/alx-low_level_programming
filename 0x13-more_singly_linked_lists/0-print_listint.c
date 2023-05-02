#include "lists.h"

/**
 * print_listint - prints all the elements of a list.
 * @h: head of a list.
 *
 * Return: numbers of nodes.
 */
size_t print_listint(const listint_t *h)
{
        int numb = 0;

        if (h != NULL) {
                while (h) {
                        printf("%d\n", h->n);
                        h = h->next;
                        numb++;
                }
        }

        return (numb);
}
