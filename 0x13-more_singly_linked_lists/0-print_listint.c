 #include "lists.h"

/**
 * print_listint - prints alinked lists
 * @h: pointer of 1st node
 *
 * Return: size of lists
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
