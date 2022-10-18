#include "main.h"

/**
 * factorial -  returns the factorial of a given number
 * @n: int
 * Return: factorial.
 */
int factorial(int n)
{

	if (n < 0)
		return (-1);

	else if (n < 2)
		return (n);

	return (n * factorial(n - 1));
}
