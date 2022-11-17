#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a
 * @head: node list
 * @index: unsigned integer
 * Return: the position of the element which ask for
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *new = head;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; i < index && new; i++)
	{
		if (new->next == NULL)
			return (NULL);
		new = new->next;
	}
	return (new);
}
