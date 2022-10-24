#include 'main.h'
/**
 * *create_array - 
 * @c:  char creates an array of chars
 * Return: NULL if size = 0, a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{	
    char *a;
    unsigned int i; 	
    
    if (size == 0)		
        return (NULL); 	
    a = malloc(size * sizeof(*a));	
    if (a == NULL)		
        return (NULL); 	
    for (i = 0; i < size; i++)		
        a[i] = c; 	
return (a);
}