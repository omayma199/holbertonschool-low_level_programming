#include "lists.h"
/**
 * list_len - add new element to node list
 * @head: adress of list_t
 * @str: string
 * Return: address head
 */
list_t *add_node(list_t **head, const char *str)
{
    unsigned int len = 0;  
    list_t *newNode = malloc(sizeof(list_t));
    
    if (str == NULL || newNode == NULL)
        return (NULL);

    while (str[len] != '\0')
        len++;

    newNode->len = len;
    newNode->str = strdup(str);
    newNode->next = *head;
    
    *head = newNode;

    return (*head);
}
