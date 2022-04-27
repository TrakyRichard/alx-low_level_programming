#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head of a list
 * @head: head of the list
 *
 * Return: the head node's data
 */
int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *deletedNode = NULL;

	if (!head || *head == NULL)
		return (0);

	deletedNode = *head;
	n = deletedNode->n;
	*head = deletedNode->next;

	free(deletedNode);

	return (n);
}
