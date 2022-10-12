#include "main.h"

/**
 * _strcat - Concatenates the string pointed to by @src,
 * null byte, to the end of the string pointed to by @dest.
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 *
 * Return: A pointer to the destination string @dest.
 */
char *_strcat(char *dest, char *src)
{	
	int len1 = strlen(dest);
	int len2 = strlen(src);
	int i;

	for (i = 0; i <= len2; i++)
	{
		dest[len1 + 2] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
