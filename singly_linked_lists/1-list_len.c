#include "lists.h"
/**
* list_len - print lenght of list
* @h: list_t
* Return: size
*/
size_t list_len(const list_t *h)
{
    int i = 0;
    
    while (h != NULL)
    {
        i++;
        h = h->next;
    }
    return(i);
}
