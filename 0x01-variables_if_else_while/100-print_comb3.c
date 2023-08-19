#include <stdio.h>

/*
 * * main-prints all possible different combinations of two digits.
 * * Numbers must be separated by ,, followed by a space
 * * The two digits must be different
 * * 01 and 10 are considered the same combination of the two digits 0 and 1
 * * it prints only the smallest combination of two digits
 * * Return: 0 if successful
 */

int main(void)
{
	int i, e;

	for (i = 48; 48 < 58; i++)
	{
		for (e = 48; 48 < 58; e++)
		{
			if (i < e && i != e)
			{
				putchar(i);
				putchar(e);
				if (i == 57 && e == 56)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return(0);
}
