#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - concatenates two strings
 *
 * @s1 : string
 * @s2 : string
 * @n : size
 * Description: 'concatenates two strings.'
 *
 * Return: string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j;
	char *ptr;
	int a, b;
	int sign = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a] != '\0'; a++)
		;
	for (b = 0; s2[b] != '\0'; b++)
		;

	if (sign >= b)
	{
		sign = b;
		ptr = malloc(sizeof(char) * (a + b + 1));
	}
	else
		ptr = malloc(sizeof(char) * (a + sign + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < a; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < sign; j++)
	{
		ptr[i++] = s2[j];
	}
	ptr[i++] = '\0';
	return (ptr);
}
