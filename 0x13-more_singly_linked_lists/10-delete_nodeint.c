#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - inerts a new node at a given position
 * @head: head of the list
 * @index: index to insert to
 *
 * Return: The address of the new node
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

	listint_t *tmp = NULL, *next = NULL;

	if (!head)
		return (-1);

	tmp = *head;

	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}

	while (tmp != NULL && index-- > 1)
		tmp = tmp->next;

	if (tmp == NULL || tmp->next == NULL)
		return (-1);

	next = tmp->next->next;
	free(tmp->next);
	tmp->next = next;
	return (1);
}
