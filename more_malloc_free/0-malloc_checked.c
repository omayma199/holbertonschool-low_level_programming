#include "main.h"
/**
* malloc_checked - allocates memory
* @b : unsigned integer
* return : ptr
*/
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == 0)
		exit (98);
	return (ptr);
}
