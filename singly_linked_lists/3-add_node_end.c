#include "lists.h"
/**
 * add_node_end - add new element to the end of node list
 * @head: adress of list_t
 * @str: string
 * Return: address head
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *newNode = malloc(sizeof(list_t));
	list_t *lastNode;

	if (str == NULL || newNode == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;
	newNode->len = len;
	newNode->str = strdup(str);
	newNode->next = NULL;
	if (*head == NULL)
		*head = newNode;
	else
	{
		lastNode = *head;
		while (lastNode->next != NULL)
		{
			lastNode = lastNode->next;
		}
		lastNode->next = newNode;
	}
	return (*head);
}

