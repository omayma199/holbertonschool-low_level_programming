#include "lists.h"
/**
 * add_dnodeint - add new element to node list
 * @head: adress of list_t
 * @n: integer
 * Return: address head
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;
	dlistint_t *i = *head;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->prev = NULL;

	if (i != NULL)
		while (i->prev != NULL)
			i = i->prev;

	newNode->next = i;

	if (i != NULL)
		i->prev = newNode;

	*head = newNode;

	return (*head);
}
