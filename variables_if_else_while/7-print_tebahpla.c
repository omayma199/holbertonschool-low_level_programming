#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - lowercase alphabet in reverse
 *
 * Return:char
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
	putchar(c);
	}
	putchar('\n');
	return (0);
}
