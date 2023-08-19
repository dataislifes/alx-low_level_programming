#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * * main-will assign a random number to the n each time it's executed.
 * * The variable n will store a different value every time
 * * Return: 0 if successful
 */

int main(void)

{

	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	return (0);
}
