#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the begining of a listint_t list
 * @head: head of the list (a pointer)
 * @n: value of the node
 *
 * Return: The address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
