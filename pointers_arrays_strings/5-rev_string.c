#include "main.h"
/**
 * rev_string - Reverses a string.
 * @s: string to be reserved.
 */

void rev_string(char *s)
{
	int len = 0;
	int i = 0;
	char temp;

	len = strlen(s);
	for (i = 0 ; i < len / 2 ; i++)
	{
		temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
	}
}

