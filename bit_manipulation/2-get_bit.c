#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: number
 * @index: number
 * Return: unsigned int.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int i;

	i = ((n >> index) & 1);
	if (index > 100)
		return (-1);
	return (i);
}
