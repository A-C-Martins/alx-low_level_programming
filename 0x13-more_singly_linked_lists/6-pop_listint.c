#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: the data inside the elements that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp, *present;
	int num;

	temp = present = *head;
	if (!head)
		return (0);

	if (*head)
	{
		num = present->n;
		*head = present->next;
		free(temp);
	}
	else
		num = 0;
	return (num);
}
