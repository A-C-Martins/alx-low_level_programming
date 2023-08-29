#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *present;

	if (head == NULL)
		return;
	present = *head;

	while (present != NULL)
	{
		temp = present;
		present = present->next;
		free(temp);
	}
	*head = NULL;
}
