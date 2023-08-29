#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int i;

	for (i = 0; h;)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}

	return (i);
}
