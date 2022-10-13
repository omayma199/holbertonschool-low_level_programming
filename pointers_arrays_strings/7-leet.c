#include "main.h"

/**
 * leet - Encodes a string to 1337.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *str)
{
	int i = 0, j;
	char leet [10] = {'O', 'L', 'a', 'E', 'A', 'e', 'o', 'T', 't', 'l'};

	while (str[i])
	{
		for (j = 0; j <= 7; j++)
		{
			if (str[i] == leet[j] ||
					str[i] - 32 == leet[j])
				str[i] = j + '0';
		}

		i++;
	}

	return (str);
}
