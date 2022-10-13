#include "main.h"

/**
 * leet - Encodes a string to 1337.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *str)
{
	int i, j, len;
	char a[5] = "aeotl";
	char x[5] = "43071";
	char c[5] = "AEOTL";

	len = strlen(str);

	for (i = 0; i < len; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == a[j] || str[i] == c[j])

			{
				str[i] = x[j];
			}
		}
	}
	return (str);
}

