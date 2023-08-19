#include <stdio.h>

/*
 * * main-prints all possible different combinations of two digits.
 * * Numbers must be separated by ,, followed by a space
 * * The two digits must be different
 * * it prints only the smallest combination of two digits
 * * Return: 0 if successful
 */

int main(void)

{
	int i, e;

	i = 48;
	e = 48;

	while (e < 58)

	{
		i = 48;

		while (i < 58)

		{
			if (e != i && e < i)
			{
				putchar(e);
				putchar(i);
				if (i == 57 && e == 56)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			i++;
		}
		e++;
	}
	putchar('\n');
	return (0);
}
