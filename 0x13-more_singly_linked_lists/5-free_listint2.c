#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a listint_t list
 * @head: head of the list (pointer)
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *next = NULL;

	if (!head)
		return;

	while (*head)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
	}

	*head = NULL;
}
