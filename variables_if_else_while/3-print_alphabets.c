#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - lowercase, and then in uppercase
 *
 *Return: char
*/
int main(void)
{
	char c;
	
	for (c = 'a'; c <= 'z'; c++)
	{
	putchar(c);
	}
	putchar('\n');
	for (c = 'A'; c <= 'Z'; c++)
	{
	putchar(c);
	}
	putchar('\n');
	return (0);
}
