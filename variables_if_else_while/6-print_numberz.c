#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - single digit numbers
 *
 *Return: int
 */
int main(void)
{

	int n;

	for (n = '0' ; n <= '9'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
