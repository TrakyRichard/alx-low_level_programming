#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inerts a new node at a given position
 * @head: head of the list
 * @idx: index to insert to
 * @n: data of the new node
 *
 * Return: The address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = NULL, *prev_node = NULL, *curr_node = NULL;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	new_node->n = n;
	new_node->next = NULL;

	curr_node = *head;

	while (curr_node && idx-- > 0)
	{
		prev_node = curr_node;
		curr_node = curr_node->next;
	}

	if (idx > 0)
	{
		free(new_node);
		return (NULL);
	}

	if (prev_node)
	{
		prev_node->next = new_node;
		new_node->next = curr_node;
	}
	else
		*head = new_node;

	return (new_node);
}
