#include <stdio.h>

/**
 * * main-print the alphabet in lowercase
 * * and in uppercase
 * * followed by a new line
 * * Return: 0 if successful
 */

int main(void)

{
	int oe;

	for (oe = 'a'; oe <= 'z'; oe++)
		putchar(oe);
	for (oe = 'A'; oe <= 'Z'; oe++)
		putchar(oe);
	putchar('\n');
	return (0);
}
