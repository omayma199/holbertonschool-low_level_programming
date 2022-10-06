#include "main.h"
/**
 * _isupper - checks for alphabetic uppercase character.
 * @c:  is a letter, uppercase
 * Return: 1 if c is a letter, lowercase or uppercase Return:  0 otherwise
 */

int _isupper(int c)
{
	if  (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	else
	return (0);
}
