#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	listint_t *current = h;
	int i;

	for (i = 0; current; i++)
	{
		printf("%u\n", current->n);
		current = current->next;
	}

	return (i);
}
