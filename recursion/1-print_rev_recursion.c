#include "main.h"

/**
 * _puts_recursion - reverse a string
 * @s: string
 * Return: s.
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}


}
