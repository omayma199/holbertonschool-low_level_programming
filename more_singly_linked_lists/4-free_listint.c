#include "lists.h"
/**
 * free_listint - frees list
 * @head: adress of list_t
 * Return: nul
 */
void free_listint(listint_t *head)
{
	if (head != NULL)
	{
		if (head->next)
		free_listint(head->next);
	free(head);
	}
}

