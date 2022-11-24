#include "lists.h"

/**
 * dlistint_len - return the number of element of node list
 * @h: dlistint
 * Return: size_t
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;
	while (h != NULL)
	{
		h = h->next;
		i++;
	}

	return (i);
}