#include "main.h"
/**
 * print_last_digit - last digit of a number
 * @x: check number
 * Return: x
 */
int print_last_digit(int x)
{
	int n;

	n = x % 10;
	if (n < 0)
	{
		n = -n;
	}
	_putchar('0' + n);
	return (n);
}
