#include <stdio.h>

/**
 * * main-print the alphabet in lowercase
 * * followed with a new line
 * * Return: 0 if successful
 */

int main(void)
{
	char oe;

	for (oe = 'a'; oe <= 'z'; oe++)
	{
		putchar(oe);
	}
	putchar('\n');
	return (0);
}
