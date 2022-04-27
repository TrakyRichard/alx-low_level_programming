#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elemnets of a listint_t
 * @h: head of the list
 *
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
