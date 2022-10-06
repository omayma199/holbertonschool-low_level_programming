#include "main.h"
/**
 * times_table -  prints the 9 times table, starting with 0
 * @x: check number
 * Return: table
 */
void times_table(void)
{

	int l, c, d;

	for (l = 0; l <= 9; l++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
	for (c = 1; c <= 9; c++)
	{
		d = (l * c);
		if ((d / 10) > 0)
		{		
			_putchar((d / 10) + '0');
		}
		else
		{
			_putchar(' ');
		}
			_putchar((d % 10) + '0');
		if (c < 9)
		{	
			_putchar(',');
			_putchar(' ');
		}
	}		
			_putchar('\n');
}
}
