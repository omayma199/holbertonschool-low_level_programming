#include "variadic_functions.h"

/**
 * print_strings - Entry point
 *
 * @separator: string
 *
 * @n: constant unsigned integer
 *
 * Description: 'print parameters.'
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list ptr;
	char *str;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ptr, char *);
		printf("%s", str ? str : "(nil)");
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	putchar('\n');

	va_end(ptr);
}
