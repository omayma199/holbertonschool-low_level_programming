#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - prints the alphabet
 *
 * Return:char
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
	{
		if (c != 'q' && c != 'e')
		putchar(c);

	}
	putchar('\n');
	return (0);
}
