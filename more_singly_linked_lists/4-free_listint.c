#include "lists.h"
/**
 * free_listint - frees list
 * @head: adress of list_t
 * Return: nul
 */
void free_listint(listint_t *head)
{

	while (head != NULL)
	{
		free_listint_t (head->next);
	free(head);
	}
}