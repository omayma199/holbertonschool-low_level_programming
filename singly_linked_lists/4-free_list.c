#include "lists.h"
/**
 * free_list - frees list
 * @head: adress of list_t
 * Return: nul
 */
void free_list(list_t *head)
{
	list_t *start;

	while (head != NULL)
	{
		start=(head->next);
		free(head->str);
		free(head);
		head = start;
	}
}
