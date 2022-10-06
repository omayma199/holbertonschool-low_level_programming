#include "main.h"
/**
 * print_last_digit - last digit of a number
 * @x: check number
 * Return: x
 */
int print_last_digit(int x)
{
	int n;
	if (x < 0)
		x = -x;
	n= x % 10;
	_putchar('0' + n);
	return (n);

}
