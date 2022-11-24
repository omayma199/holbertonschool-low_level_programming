#include "lists.h"
/**
 * add_dnodeint_end - add new element to the end of node list
 * @head: adress of node
 * Return: address head
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));
    dlistint_t *h;

    if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head)
	{
		h = *head;
		while (h->next != NULL)
			h = h->next;
		h->next = newNode;
		newNode->prev = h;
	}
	else
		*head = newNode;

	return (newNode);
}