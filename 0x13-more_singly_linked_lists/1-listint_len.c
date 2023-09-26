#include "lists.h"

/**
 * lisint_len - prints a linked lists
 * @h: pointer to first node
 *
 * Return: size of list
 */

size_t list_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}

