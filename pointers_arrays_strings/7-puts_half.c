#include "main.h"

/**
 * puts_half - half of a string.
 * @str: string to be printed.
 */
void puts_half(char *str)
{

	int len = 0;
	int i = 0;

	len = strlen(str);
	for (i = len / 2 ; i < len ; i++)
		_putchar(str[i]);

	_putchar('\n');
}
