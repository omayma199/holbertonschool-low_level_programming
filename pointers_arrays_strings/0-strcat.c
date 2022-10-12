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
	int len1, len2;

	for (len1 = 0; dest[len1] != '\0'; len1++);

	for (len2 = 0; src[len2] != '\0'; len2++)
	{
		dest[len1 + len2] = src[len2];
	}
	return (dest);

}
