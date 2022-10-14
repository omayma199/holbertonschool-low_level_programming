#include "main.h"
/**
 * *_memcpy -  function that copies memory area.
 * @dest: destination
 * @src: source
 * @n: integer
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char  *pdest = dest;
	char  *psrc = src;
	unsigned int i;

	while (n--)
	{
	{
		*pdest++ = *psrc++;
	}
	}
	return (dest);
}
