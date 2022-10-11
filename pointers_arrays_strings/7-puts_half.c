#include "main.h"

/**
 * puts_half - half of a string.
 * @str: string to be printed.
 */
void puts_half(char *str)
{

	int len = 0;
	int i = 0;
	int j;
	len = strlen(str);

	if ((len % 2) == 0)
		j = len / 2;

	else
		j = (len + 1) / 2;
	for (i = j ; i < len ; i++)
		_putchar(str[i]);

	_putchar('\n');
}
