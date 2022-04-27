#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t
 * @head: head of the list
 * @index: index of the node
 *
 * Return: the node at index if exits, or NULL otherwise
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	if (!head)
		return (NULL);

	while (head && index-- > 0)
		head = head->next;

	return (head);
}
