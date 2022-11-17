#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t
 * @head: Parameter that point to the head of the linked list
 * Return: Return the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *temp, *temp2;
	int n;

	if (*head == NULL)
	{
		return (0);
	}
	temp = *head;
	temp2 = temp->next;
	n = temp->n;
	free(*head);
	*head = temp2;

	return (n);
}
